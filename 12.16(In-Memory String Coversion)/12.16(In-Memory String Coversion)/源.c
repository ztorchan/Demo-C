#include<stdio.h>
#include<stdlib.h>
#define size 81
int main()
{
	int num1 = 2691,num3,num4;
	float num2 = 2.691;
	char s = 'I';
	char string[size];

	sprintf(string, "%c %d %f", s, num1, num2);
	puts(string);
	sscanf(string, "%c%d%d%d%f", &s, &num4, &num3, &num1, &num2);
	printf("%c\n%d\n%d\n%d\n%f", s, num4, num3, num1, num2);

	system("pause");
	return 0;

}