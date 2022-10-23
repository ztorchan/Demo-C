#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	char filename[] = "data.txt";
	char c=0;
	FILE* infile;

	infile = fopen(filename, "r");
	scanf("%d", &n);
	while (c!=EOF)
	{
		fseek(infile, n, SEEK_END);
		c = fgetc(infile);
		fputc(c, stdout);
		n--;
	}
	getchar();
	getchar();
	return 0;
}