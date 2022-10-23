#include <stdio.h>
#include <stdlib.h>
int count=2;
void A();
int main()
{
	printf("%p\n", &count);
    int count=0;
	printf("%p\n", &count);
	A();

	system("pause");
	return 0;
}
void A()
{printf("%p\n", &count); }
