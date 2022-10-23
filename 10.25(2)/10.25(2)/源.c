#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num2;
	float num1,num3;
	printf("please enter 3 number:");
	scanf_s("%f%d%f", &num1, &num2, &num3);
	printf("%f and %d and %f",num1,num2,num3 );
	system("pause");
	return 0;
}