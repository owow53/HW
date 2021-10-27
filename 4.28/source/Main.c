#include <stdio.h>
#include <stdlib.h>
	
int main(void)
{
	double a, b, c, d, e, f, g, h, i ;
	int money;
	printf("Enter salary of (1): ");
	scanf_s("%lf", &a);
	printf("\n");
	printf("Enter hourly swag of (2): ");
	scanf_s("%lf", &b);
	printf("Enter operating hours of (2): ");
	scanf_s("%lf", &c);
	printf("\n");
	printf("Enter Sales Amount of (3): ");
	scanf_s("%lf", &d);
	printf("\n");
	printf("Enter Number of objects of (4): ");
	scanf_s("%lf", &i);
	printf("Enter Number salary of (4): ");
	scanf_s("%lf", &g);
	if (c <= 40)
		e = b * c;
	else
		e = b * c + (c-40) * (b * 1.5);
	f = 250 + d * 0.057;
	h = i * g;
	printf("Enter paycode");
	scanf_s("%d", &money);
	while ((money == 1) || (money == 2) || (money == 3) || (money == 4))
	{
		switch (money)
		{
		case 1:
			printf("Salary of (1) %f\n", a);
			printf("Enter paycode");
			scanf_s("%d", &money);
			break;
		case 2:
			printf("Salary of (2) %f\n", e);
			printf("Enter paycode");
			scanf_s("%d", &money);
			break;
		case 3:
			printf("Salary of (3) %f\n", f);
			printf("Enter paycode");
			scanf_s("%d", &money);
			break;
		case 4:
			printf("Salary of (4) %f\n", h);
			printf("Enter paycode");
			scanf_s("%d", &money);
			break;
		}
	}
}