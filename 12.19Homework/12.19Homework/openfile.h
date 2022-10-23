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
		if (c != 'y')/*设置非y时就退出防止用户误按造成文件被覆写*/
		{
			printf("The file will not be overwritten.\n");
			system("pause");
			exit(1);
		}
	}

	fp = fopen(filename, "w");
	return fp;
}
