#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x, y, z;
	printf("enter your weight\n");
	scanf_s("%f", &x);
	printf("enter your height\n");
	scanf_s("%f", &y);
	z = x / ((y/100)*(y/100));
	printf("Your BMI is %f\n", z);
	printf("BMI VALUES\nUnderweight:less than 18.5\nNormal:     between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese:      30 or greater\n");
	return 0;
}