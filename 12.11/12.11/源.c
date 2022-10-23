#include<stdio.h>
#include<stdlib.h>
#define Size 50
int main()
{
	char message[Size];
	scanf("%s\0", message);
	printf("%d,%d\n", message[5],message[6]);

	printf("%s\n", message);
	system("pause");
	return 0;
}