#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	void goldbach(int);
	printf("This program is aim at verifying Goldbach's conjecture.\n");
	printf("If you want to end,please enter Ctrl Z.\n\n");
	printf("Please enter an even number greater than four:");
	while (scanf_s("%d",&num) != EOF)
	{
		if (num < 4)
			printf("Error!The number is less than four.\n\n");
		else if (num % 2 != 0)
			printf("Error!The number is not an even number.\n\n");
		else
			goldbach(num);
		printf("Please enter an even number greater than four:");
	}

	return 0;
}

void goldbach(int a)
{
	int prime(int);
	int n,m;
	for (n = 2; n < a; n++)
	{
		m = a - n;
		if (prime(n) == 1 && prime(m) == 1)
			break;
	}
	printf("%d conforms to Goldbach's conjecture.\n\n",a);
}

int prime(int b)
{
	int n, mid = 1;
	if (b == 2)
		return mid;
	else
	{
		for (n = 2; n < b; n++)
		{
			if (b%n == 0)
			{
				mid = 0;
				break;
			}
		}
	}
	return mid;
}
