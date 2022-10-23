#include<stdio.h>
#include<stdlib.h>
#define Size 10
int main()
{
	void selectSort(int*);
	void bubbleSort(int*);
	int linearSearch(int*,int);
	int sequentialSearch(int*,int);

	int nums[Size], i, n = 0, redix;
	printf("Please enter 10 number:");
	for(i=0;i<10;i++)
		scanf("%d", nums+i);
	printf("The numbers you have entered are:");
	for (i = 0; i < 10; i++)
		printf("%d ", *(nums + i));
	putchar('\n');
	//selectSort(nums);
	bubbleSort(nums);
	printf("After sorting, these nums are:");
	for (i = 0; i < 10; i++)
		printf("%d ", *(nums + i));
	putchar('\n');
	printf("Please enter the number you want:");
	scanf("%d", &n);
	//redix=linearSearch(nums,n);
	redix=sequentialSearch(nums,n);
	if (redix != -1)
		printf("The number is the %dth number.",redix);
	else
		printf("The number isn't exist");

	system("pause");
	return 0;
}

void selectSort(int* p)
{
	int i, j, min, temp;
	for(i=0;i<Size;i++)
	{ 
		min = *(p+i);
		for (j = i + 1; j < Size; j++)
			if (min > *(p + j))
			{
				temp = *(p + j);
				*(p + j) = min;
				min = temp;
			}
		*(p + i) = min;
	}
}

void bubbleSort(int*p)
{
	int i, j, temp;
	for (i = 0; i < Size-1; i++)
	{
		for(j=1;j<Size-i;j++)
			if (*(p+j-1)>*(p+j))
			{
				temp = *(p + j - 1);
				*(p + j - 1) = *(p + j);
				*(p + j) = temp;
			}
	}
}

int linearSearch(int *p, int n)
{
	int i,found=0,redix=-1;
	for (i = 0; i < Size && !found; i++)
		if (n == *(p + i))
		{
			found = 1;
			redix = i + 1;
		}
	return redix;
}

int sequentialSearch(int*p, int n)
{
	int a = 0, b = Size - 1, mid,tag, found = 0;
	int redix = -1;
	while (!found&&a<=b)
	{
		mid = a + b;
		tag = *(p + mid);
		if (tag == n)
		{
			found = 1;
			redix = mid+1;
		}
		else if (tag < n)
			a = mid+1;
		else if (tag > n)
			b = mid-1;
	}

	return redix;
}
