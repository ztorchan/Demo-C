#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define Size 10
int main()
{
	double findAve(float[], int);
	double findDev(float[], int,double);
	float nums[Size];
	double ave, dev;
	int n;

	printf("Please enter a set of number(total 10).\n");
	printf("Use enter between each number.\n");

	for (n = 0; n < Size; n++)
		scanf("%f", &nums[n]);

	ave = findAve(nums, Size);
	dev = findDev(nums, Size,ave);

	printf("The average of the set of number is %f.\n", ave);
	printf("The standard devitation of the set of number is %f.",dev);
	
	system("pause");
	return 0;
}

double findAve(float a[], int b)
{
	int n;
	double total=0.0;
	for (n = 0; n < b; n++)
		total += a[n];

	return total / b;
}


double findDev(float a[], int b, double ave)
{
	int n;
	double sum = 0.0;

	for (n = 0; n < b; n++)
		sum += pow((a[n] - ave), 2);

	return sqrt(sum / b);
}