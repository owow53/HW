#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x, y, z;

	for (x = 1; x <= 500; x++)
	{
		for (y = x; y <= 500; y++)
		{
			for (z = 1; z <= 500; z++)
			{
				if (z == sqrt(x * x + y * y))
				{
					printf("%d , %d , %d\n" , x ,y,z);
				}
			}
		}
		
	}
}
