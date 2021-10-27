#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	char sign = '+';

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 12; b++)
		{
			if ((a == 0) || (a == 2) || (b == 0) || (b == 11))
			{
				printf("%c", sign);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
}