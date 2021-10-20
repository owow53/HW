#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;

	printf("enter two nums\n");
	scanf_s(" %d%d", &x, &y);

	if (x % y == 0)
	{
		printf("%d is %d multiple\n", x, y);
	}
	if (x % y != 0)
	{
		printf("%d is not %d multiple\n", x, y);
	}
	return 0;
}