#include<stdio.h>
#include<stdlib.h>
/*This program is aimed at calculating your GPA.*/
int main()
{
	int i;
	float GPA=0, Grade=0, Credit=0;
	float grade = 0, credit = 0;
	printf("This program is aimed at calculating your GPA.\n");
	printf("If you want to end the input,please enter crtl z.\n");
	printf("Please enter your grade and according credit(The two numbers are separated by spaces):\n");
	printf("G  C\n");
	printf("-- --\n");
	while (scanf("%f %f",&grade,&credit)!=EOF)
	{
		if (grade < 60)
		{
			Grade = Grade + 0;
			Credit = Credit + credit;
		}
		else if (grade <= 100)
		{
			Grade = Grade + (grade - 50)*credit / 10;
			Credit = Credit + credit;
		}
		else
			printf("Please enter ture number!!");
	}
	GPA = Grade / Credit;
	if (GPA < 3.5)
		printf("\nYour GPA is %4.2f,COME ON!!!", GPA);
	else
		printf("\nExcellent!Your GPA is %4.2f", GPA);
	system("pause");
	return 0;
}