#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;
	double sum;
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &a);
	while (a != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &c);
		sum = a * b * c / 365;
		printf("The interest charge is $ %.2f\n", sum);
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &a);
	}
	if (a == -1)
	{
		return 0;
	}
}