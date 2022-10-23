#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1 = 0, num2 = 0;
	int  result = 0;
	float  result2 = 0;
	char operator=0;
	printf("Please enter the formula(only two number): ");
	scanf("%d%c%d", &num1, &operator,&num2);
	if (operator=='+' || operator== '-' || operator== '*' || operator=='/')
	{
		{
			if (operator=='+')
				result = num1 + num2;
			else if (operator=='-')
				result = num1 - num2;
			else if (operator=='*')
				result = num1 * num2;
			else
				result2 = num1 * (1.0 / num2);
		}
		{if (operator=='/')
			printf("The reault is %.4f\n", result2);
		else
			printf("The reault is %d\n", result);
		}
	}
	else
		printf("Error!Please enter the ture operator\n");
	system("pause");
	return 0;
}