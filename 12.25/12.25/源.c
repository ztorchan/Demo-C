#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*infile;
	infile = fopen("data.txt", "r");
	while (!feof(infile))
	{
		printf("%d", ftell(infile));
		fputc(fgetc(infile), stdout);
		putchar('\n');
	}
	fclose(infile);
	getchar();
	return 0;
}