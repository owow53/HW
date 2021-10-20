#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, sum;
	printf("Total mileage for a whole day\n");
	scanf_s("%f", &a);
	printf("How much one liter of gas\n");
	scanf_s("%f", &b);
	printf("Driving a few kilometers per liter\n");
	scanf_s("%f", &c);
	printf("One day's parking fee\n");
	scanf_s("%f", &d);
	printf("Toll for a day\n");
	scanf_s("%f", &e);
	sum = a / c * b + d + e;
	printf("Toll for a day is %f\n", sum);
	return 0;
}