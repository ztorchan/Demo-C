#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415926535
#define EACH 200.0
int main()
{
	float signwidth, innerradius;
	printf("Please enter the SignWidth(feet):");
	scanf_s("%f", &signwidth);
	innerradius = signwidth / 4;

	float totalarea, innerarea, outerarea;
	totalarea = (signwidth / 2)*pow(PI, 2);
	innerarea = (innerradius / 2)*pow(PI, 2);
	outerarea = totalarea - innerarea;

	float red, blue;
	red = innerarea / EACH;
	blue = outerarea / EACH;

	printf("We need %f quart red paint\n", red);
	printf("We need %f quart blue paint\n", blue);

	system("pause");
	return 0;
}