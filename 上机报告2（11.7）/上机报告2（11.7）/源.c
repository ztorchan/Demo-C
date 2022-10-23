#include <stdio.h>
#include <stdlib.h>

int main()
{
	char A = 0;
	int  N = 0, L = 0, C = 0, S = 0;
	printf("Please enter a line string(number,letter,special characters and spaces):\n");
	while (A != '\n')
	{
		scanf("%c", &A);
		if (48 <= (int)A && (int)A <= 57)
			N++;
		else if ((65 <= (int)A && (int)A <= 90) || (97 <= (int)A && (int)A <= 122))
			L++;
		else if ((int)A == 32)
			S++;
		else
			C++;
		}
	printf("There are %d numbers.\n", N);
	printf("There are %d letters.\n", L);
	printf("There are %d spaces.\n", S);
	printf("There are %d special characters.\n", C - 1);


	system("PAUSE"); 
	return 0;
}
