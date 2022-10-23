#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num1, num2, num3, num4;
	int result;

	printf("Please enter a four-digit integer:");
	scanf_s("%1d%1d%1d%1d", &num1,&num2,&num3,&num4);

	result = pow(num1, 2) + pow(num2, 2) + pow(num3, 2) + pow(num4, 2);

	printf("The first number is %d\n", num1);
	printf("The second number is %d\n", num2);
	printf("The third number is %d\n", num3);
	printf("The forth number is %d\n", num4);
	printf("The sum of squares of each digits is %d\n", result);

	system("pause");
	return 0;

}

