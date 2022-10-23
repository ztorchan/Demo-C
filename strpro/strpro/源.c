#include<stdio.h>
#include<stdlib.h>
#define Size 30

void getString(char message[][Size])
{
	int n=0, j=0;
	do
	{
		scanf("%c", &message[n][j]);
		if (message[n][j] = ' ')
		{
			n++;
			j = 0;
			continue;
		}
		else if (message[n][j] = '\n')
			break;
		j++;

	} while (1);
}

void sort(char message[][Size],int size)
{
	char temp[Size];
	int n, j;
	for (n = 0; n < size-1; n++)
	{
		for (j = 1; j < size - n; j++)
			if (strcmp(message[j], message[j-1]) > 0)
			{
				strcpy(temp, message[j]);
				strcpy(message[j], message[j - 1]);
				strcpy(message[j - 1], temp);
			}

	}
}

void read(char filename[])
{
	char string[100];
	FILE *fp = fopen(filename, "r");
	fgets(string, 100, fp);
	printf("The content has been written is:");
	puts(string);
	fclose(fp);
}