#include<stdio.h>
#include<stdlib.h>
int main()
{
	void add(float *);
	float n;
	float *pn = &n;

	printf("Please enter a float number:");
	scanf("%f", &n);
	printf("The number is %f\n", n);
	printf("The address which will be passed is %p\n\n", &n);
	add(pn);
	printf("After calling, the number is %f", n);
	system("pause");
	return 0;
}

void add(float *p)
{
	printf("The number is %f\n", *p);
	printf("The address has been passed is %p\n\n", p);
	*p += 10.21;
}