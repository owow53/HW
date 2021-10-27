#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4()
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp = 0;
	int temp2 = 9;
	printf("(4)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == temp) && (i > 0))
			{
				printf("%c", sign);
			}
			else if ((i < 5) && (j == temp2) && (i > 0))
			{
				printf("%c", sign);
			}
			else if (i == 0)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp++;
		temp2--;
		printf("\n");
	}
	return 0;
}