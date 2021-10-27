#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b;
	float sum;
	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &a);
	while (a != -1)
	{
		if (a <= 40)
		{
			printf("Enter hourly rate of the worker ($ 00.00): ");
			scanf_s("%f", &b);
			sum = a * b;
			printf("Salary is $ %f\n", sum);
			printf("Enter # of hours worked (-1 to end): ");
			scanf_s("%f", &a);
		}
		if(a > 40)
		{
			printf("Enter hourly rate of the worker ($ 00.00): ");
			scanf_s("%f", &b);
			sum = 40 * b + (a - 40) * b * 1.5;
			printf("Salary is $ %f\n", sum);
			printf("Enter # of hours worked (-1 to end): ");
			scanf_s("%f", &a);
		}
	}
	if (a == -1)
	{
		return 0;
	}
}