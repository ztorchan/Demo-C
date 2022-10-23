#include<stdio.h>
#include<stdlib.h>

void openw(char filename[])
{
	FILE *fp;
	char c;
	char string[81];

	if (fp = fopen(filename, "r") != NULL)
	{
		printf("The file is existing.");
		printf("Do you want to overwrite it?(y or n)");
		c = getchar();
		if (c != 'y')
		{
			printf("The file will not be overwritten.");
			exit(1);
		}
	}

	fp = fopen(filename, "w");
	printf("Please enter the content that you want to write.\n");
	gets(string);
	fputs(string, fp);
	fclose(fp);
}