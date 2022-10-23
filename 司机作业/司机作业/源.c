#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 3, b = 4, c = 5, u = 51274, n = 128765;
	float x = 1.2, y = 2.4, z = -3.6;
	char c1 = 'a', c2 = 'b';
	printf("a=%d;b=%d;c=%d;\n", a, b, c);
	printf("x=%f;y=%f;z=%.1f;\n", x, y, z);
	printf("x+y=%.2f;y+z=%.2f\n", x + y, y + z);
	printf("u=%d;n=%9d\n", u, n);
	printf("c1=%c or %d\n", c1, c1);
	printf("c2=%c or %d\n", c1, c1);
	system("pause");
	return 0;
}