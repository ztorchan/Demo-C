#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*int main()
{
	int ran,n=0,m=0;
	int Ran(void);
	srand(time(0));
	for (n=1; n<100000000;n++)
	{
		ran = 1+Ran()%2;
		if (ran == 1)
			m++;
	}
	printf("%d", m);
	system("pause");
	return 0;
}

int Ran()
{
	return(rand());
}*/

int main()
{
	printf("%d", RAND_MAX);
	getchar();
}
