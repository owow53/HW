#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	char sign = '*';

	printf("(A)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b <= a)
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
	printf("(B)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if(a <= b)
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
	printf("(C)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b <= a)
			{
				printf(" ");
			}
			else
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
	printf("(D)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 10; b >=0; b--)
		{
			if (a <= b)
			{
				printf(" ");
			}
			else
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
}