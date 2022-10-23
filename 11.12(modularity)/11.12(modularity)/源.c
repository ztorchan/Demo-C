#include<stdio.h>
#include<stdlib.h>
int main()
{
	void findMax(int, int);
	int a=0, b=0;
	scanf("%d", &a);
	scanf("%d", &b);
	findMax(a, b);
	system("pause");

	return 0;
}

void findMax(int num1, int num2)
{
	int max;
	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);
}