#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,j,a;
	int nums[99];
	int *np = nums;
	void numSort(int*,int);
	printf("How many numbers do you want to enter:");
	scanf("%d", &n);
	printf("Please enter numbers:");
	for(j=0;j<n;j++) 
	{
		scanf("%d", &a);
		*(np + j) = a;
	}
	numSort(np,n);
	printf("After sorting,the numbers is:");
	for (j = 0; j < n; j++)
		printf("%d ", *np++);
	putchar('\n');
	system("pause");
	return 0;
}

void numSort(int* nums,int n)
{
	int temp,j;
	for (j = 0; j <= n / 2; j++)
	  {
		temp = *(nums+j);
		*(nums + j) = *(nums + n - 1 - j);
		*(nums + n - 1 - j) = temp;
	  } 
}