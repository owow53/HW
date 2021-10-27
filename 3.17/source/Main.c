#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d;
	float sum;
	printf("Enter account number (-1 to end):");
	scanf_s("%f", &a);
	while (a != -1)
	{
		
		printf("Enter mortgage amount(in dollars):");
		scanf_s("%f", &b);
		printf("Enter mortgage term(in years):");
		scanf_s("%f", &c);
		printf("Enter interest rate(as a decimal:");
		scanf_s("%f", &d);
		sum = b * c * d;
		printf("The monthly payable interest is $ %f\n", sum);
		printf("Enter account number (-1 to end):");
		scanf_s("%f", &a);
	}
	if (a == -1)
	{
		return 0;
	}

}