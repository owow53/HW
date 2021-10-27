#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &a);
	double sum;
	while (a != -1)
	{
		sum = 200 + a * 0.09;
		printf("Salary is: %.2f\n" , sum);
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &a);
	}
	if (a == -1)
	{
		return 0;
	}
}