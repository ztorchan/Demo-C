#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1=0, num2=0, result=0;
	char operator=0;
	printf("Please enter the formula(only two number): ");
	scanf("%f%c%f", &num1, &operator,&num2);
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
				result = num1 / num2;
		}
		printf("The reault is %f\n", result);
	}
	else
		printf("Error!Please enter the ture operator\n");
	system("pause");
	return 0;
}
