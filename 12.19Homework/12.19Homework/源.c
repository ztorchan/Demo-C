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
	printf("\b.");/*��һ��ո��Ͼ��*/

	sort(message,word);
	for (i = 0; 1; i++)
		if (message[word][i] == ' ')
		{
			message[word][i] = '.';/*���һ�����ʵĿո��ؾ��*/
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