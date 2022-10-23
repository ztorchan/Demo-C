#include<stdlib.h>
#include<stdio.h>
int main()
{
	float num1, num2;
	float MID;
	printf("Please enter the first num:");
	scanf_s("%f", &num1);
	printf("Please enter the second num:");
	scanf_s("%f", &num2);
	MID = (num1 + num2) / 2;
	printf("The mid of the two number is :%f\n", MID);
	system("pause");
	return 0;
}