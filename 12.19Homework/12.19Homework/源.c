#include<stdio.h>
#include<stdlib.h>
#include"openfile.h"
#include"strpro.h"

int main()
{
	char message[Size][Size];
	int i,word;
	FILE* infile;
	char filename[] = "data.txt";

	printf("Please enter the sentence you want to write:\n");
	word=getString(message);
	printf("\nThe sentence you entered is :\n");
	for (i = 0; i<=word; i++)
		printf("%s", message[i]);
	printf("\b.");/*退一格空格补上句号*/

	sort(message,word);
	for (i = 0; 1; i++)
		if (message[word][i] == ' ')
		{
			message[word][i] = '.';/*最后一个单词的空格变回句号*/
			break;
		}
	printf("\n\nAfter sorting, the sentence is:\n");
	for (i = 0; i <= word; i++)
		printf("%s", message[i]);

	infile=openw(filename);
	for (i = 0; i <= word; i++)
		fprintf(infile, "%s", message[i]);
	fclose(infile);
	printf("\nFinish!!!\n");
	read(filename);

	system("pause");
	return 0;
}