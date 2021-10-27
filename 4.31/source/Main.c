#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	int x, y;
	int temp;
	int temp2;
	temp = 3;
	temp2 = 5;
	for (x = 0; x < 4; x++)
	{
		for (y = 0; y < 9; y++)
		{
			if (y <= temp || y >= temp2)
			{
				printf(" ");
			}
			else
			{
				printf("%c", sign);
			}
			
		}
		temp--;
		temp2++;
		printf("\n");
	}
	x = 4;
	for (y = 0; y < 9; y++)
	{
		if (x = 4)
		{
			printf("%c", sign);
		}
	}
	printf("\n");
	temp = 0;
	temp2 = 8;
	for (x = 5; x < 9; x++)
	{
		for (y = 0; y < 9; y++)
		{
			if (y <= temp || y >= temp2)
			{
				printf(" ");
			}
			else
			{
				printf("%c", sign);
			}
		}
		temp++;
		temp2--;
		printf("\n");
	}

}