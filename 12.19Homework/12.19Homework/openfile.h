#include<stdio.h>
#include<stdlib.h>
#define Size 30

FILE* openw(char filename[])
{
	FILE *fp;
	char c;
	int i;

	if (fp = fopen(filename, "r") != NULL)
	{
		printf("\n\nThe file is existing.\n");
		printf("Do you want to overwrite it?(y or n):");
		c = getchar();
		if (c != 'y')/*���÷�yʱ���˳���ֹ�û�������ļ�����д*/
		{
			printf("The file will not be overwritten.\n");
			system("pause");
			exit(1);
		}
	}

	fp = fopen(filename, "w");
	return fp;
}
