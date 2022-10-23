#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 1;
	do
	{
		printf("%d times into the loop.\n", n++);
		continue;
		printf("Continue didn't take effect.");
	} while (0);

	system("pause");
	return 0;
}