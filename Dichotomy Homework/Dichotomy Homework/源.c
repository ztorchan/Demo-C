#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define E 1.0e-8
#define f(x) pow(x,4)+2*pow(x,3)+pow(x,2)-5

int main()
{
	double a = 0.0, b = 2.0, mid = 0.0,x=0.0;
	int n = 0;

	if (f(a) == 0)
		x = a;
	else if (f(b) == 0)
		x = b;
	else
	{
		while ((b - a) / 2 > E)
		{
			mid = (a + b) / 2;
			if (f(mid) == 0)
				break;
			else
			{
				{
					if ((f(mid))*(f(a)) > 0)
						a = mid;
					else
						b = mid;
				}
				n++;
			}
		}
		x = (a + b) / 2;
	}

	printf("The root which is between 1 and 2 is %.9lf\n", x);
	printf("There were %d iterations.\n", n);
	system("pause");
	return 0;
}