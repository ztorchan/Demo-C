#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* infile;
	char filename[10],string[50];

	gets(filename);
	if (infile = fopen(filename, "r") != NULL)
	{
		printf("The file is existing.\nDo you want to overwrite it?(y or n)");
		if (getchar() != 'y')
			exit(0);
	}
	getchar();
	infile = fopen(filename, "a");
	gets(string);
	fputs(string,infile);
	fclose(infile);

	getchar();
	return 0;
}