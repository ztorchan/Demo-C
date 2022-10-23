#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum = 3,n=1,k1,k2;
	sum+=10;
	sum-=10;
	n++;
	n++;
	k1 = ++n;
	printf("sum=%d\nn=%d\nk1=%d\n", sum,n,k1);
	system("pause");
	return 0;
}