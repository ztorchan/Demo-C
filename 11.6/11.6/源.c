#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 1, x, m = 0, n = 1;
	do {
		x = 0;
		n = 1; a = a + 1;
		do
		{
			if (a%n != 0)
				n = n + 1;
			else
			{
				x = x + n; n = n + 1;
			}

		} while (n < a);
		if (x == a)
			printf("%d\n", a);
	} while (a < 1001);

	system("pause");
	return 0;
}