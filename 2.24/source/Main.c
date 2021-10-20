#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;

	printf("enter a number\n");
	scanf_s("%d", &x);

	

	if (x % 2 >= 1)
	{
		printf("%d=odd", x);
	}
	if (x % 2 <= 0)
	{
		printf("%d=even", x);
	}
	return 0;
}