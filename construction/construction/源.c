#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char name[30];
	int year;
	char sex;
};
int main()
{
	struct Student chen = { "��־��", 2018, 'a' };

	printf("%c", chen.sex);
	system("pause");
	return 0;

}