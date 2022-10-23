#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b;
	printf("Please input the first num:");
	scanf_s("%f", &a);
	printf("Please input the second num:");
	scanf_s("%f", &b);
	printf("The total of the a and b is:%f", a + b);
	system("pause");
	return 0;

}