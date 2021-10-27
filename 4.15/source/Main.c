#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '%';
	float a, b;
	float rate;
	a = 5000;
	for (b = 0; b < 15; b++)
	{
		rate = a * 0.1;
		a = a + rate;
		printf("The interest of 10%c is %.2f\n", sign , rate);
	}
	printf("----------------------------------------\n");
	a = 5000;
	for (b = 0; b < 15; b++)
	{
		rate = a * 0.105;
		a = a + rate;
		printf("The interest of 10.5%c is %.2f\n", sign, rate);
	}
	printf("----------------------------------------\n");
	a = 5000;
	for (b = 0; b < 15; b++)
	{
		rate = a * 0.11;
		a = a + rate;
		printf("The interest of 11%c is %.2f\n", sign, rate);
	}
	a = 5000;
	printf("----------------------------------------\n");
	for (b = 0; b < 15; b++)
	{
		rate = a * 0.115;
		a = a + rate;
		printf("The interest of 11.5%c is %.2f\n", sign, rate);
	}
	printf("----------------------------------------\n");
	a = 5000;
	for (b = 0; b < 15; b++)
	{
		rate = a * 0.12;
		a = a + rate;
		printf("The interest of 12%c is %.2f\n", sign, rate);
	}
	system("pause");
}