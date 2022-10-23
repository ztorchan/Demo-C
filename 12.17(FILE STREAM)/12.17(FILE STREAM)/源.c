#include<stdio.h>
#include<stdlib.h>
int main()
	{
		FILE *inf;
		FILE *outf;
		char c;
		char filename[31], string[50];

		printf("Please enter the file you want to creat:");
		gets(filename);
		if ((inf = fopen(filename, "r")) != NULL)
		{
			printf("The file is existing.\nDo you want to overwrite it?(y or n):");
			if (getchar() =='n')
				exit(1);
		}

		inf = fopen(filename, "w");
		printf("Please enter sentence into the file:");
		getchar();
		gets(string);
		fputs(string, inf);
		fclose(inf);

		printf("Finish!");

		system("pause");
		return 0;
	}

