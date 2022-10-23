#include<stdio.h>
#include<stdlib.h>
#define AMMOUNT 6
int main()
{
	int findMax (int[], int);
	int num[AMMOUNT],n;

	printf("Please enter 6 integer numbers:\n");
	for (n = 0; n < AMMOUNT; n++)
		scanf("%d", &num[n]);

	printf("The maximum of these numbers is %d", findMax(num, AMMOUNT));

	system("pause");
	return 0;
}

int findMax(int num[], int a)
{
	int n,max=0;
	for (n = 0; n < a; n++)
		if (num[n] > max)
			max = num[n];

	return max;
}
