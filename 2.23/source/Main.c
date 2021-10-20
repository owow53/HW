#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, z, M, m;

	printf("enter three different nums\n");
	scanf_s("%d %d %d" , &x , &y , &z);

	if (x > y && x > z)
	{
		if (y > z)
			M = x, m = z;
		else
			M = x, m = y;
	}
	if (y > x && y > z)
	{
		if (x > z)
			M = y, m = z;
		else
			M = y, m = x;
	}
	if (z > x && z > y)
	{
		if (x > y)
			M = z, m = y;
		else
			M = z, m = x;
	}
	printf("Max=%d\n", M);
	printf("min=%d\n", m);

	return 0;
}