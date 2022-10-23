#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Size 30

int getString(char message[][Size])
{
	int n = 0, j = 0, count = 0;
	do
	{
		message[n][j] = getchar();
		if (message[n][j] == ' ')
		{
			message[n][j + 1] = '\0';/*�ڵ��ʵ�������һ��\0���γ�һ���ַ���*/
			n++;
			j = 0;
			count++;
			continue;
		}
		else if (message[n][j] == '\n')
		{
			message[n][j-1] = ' ';/*�����һ�����ʺ��ű�Ϊ�ո���������γɾ���*/
			message[n][j] = '\0';/*�ڵ��ʵ�������һ��\0���γ�һ���ַ���*/
			break;
		}
		j++;

	} while (1);
	return (count);
}

void sort(char message[][Size],int size)
{
	char temp[Size];
	int n, j;
	for (n = 0; n <= size-1; n++)
	{
		for (j = 1; j <= size - n; j++)
			if (strcmp(message[j-1], message[j]) > 0)
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
	printf("The sentence has been written is:\n");
	puts(string);
	fclose(fp);
}