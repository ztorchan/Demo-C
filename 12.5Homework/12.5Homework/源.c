#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  Size 30

int main()
{
	int findWord(char [][Size],int);
	char string[Size][Size];
	int n=0,j=0,index=0;

	printf("Please enter a sentence:\n");

	do
	{
		scanf("%c", &string[n][j]);
		 if(string[n][j] == ' ')
			{
			    string[n][j] = '\0';
				j = 0;
				n++;
				continue;
			}
		else if (string[n][j] == '\n')
			{
			string[n][j - 1] = '\0';
			break;
			}
		 j++;
	} while (1);

	index = findWord(string,n);

	printf("\nThe longest word is:  ");
	for (n = 0;string[index][n]!='\0'; n++)
		printf("%c", string[index][n]);
	printf("\n");
	system("pause");
	return 0;
}


int findWord(char string[][Size],int row)
{
	int n,max=0,imax=0;
	for (n = 0; n <= row; n++)
	{
		if (max < strlen(string[n]))
		{
			max = strlen(string[n]);
			imax = n;
		}
	}

	return imax;
}
