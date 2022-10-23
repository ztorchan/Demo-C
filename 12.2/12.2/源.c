/*Exercise Two-Dimensional Arrays*/
#include<stdio.h>
#include<stdlib.h>
#define Side 3

int main()
{
	void squarem(int[][Side], int[][Side]);
	int numf[Side][Side];
	int nums[Side][Side];
	int n;

	printf("Please enter a 3*3 integer digitals square:\n");
	for (n = 0; n < Side; n++)
		scanf("%d %d %d", &numf[n][0], &numf[n][1], &numf[n][2]);
	printf("\n\nPlease enter another 3*3 integer digitals square:\n");
	for (n = 0; n < Side; n++)
		scanf("%d %d %d", &nums[n][0], &nums[n][1], &nums[n][2]);

	squarem(numf, nums);
	system("pause");
	return 0;
}

void squarem(int A[][Side], int B[][Side])
{
	int n;
	printf("\n\nThe result is:\n");
	for (n = 0; n < Side; n++)
		printf("%d %d %d\n", A[n][0] * B[n][0], A[n][1] * B[n][1], A[n][2] * B[n][2]);
}