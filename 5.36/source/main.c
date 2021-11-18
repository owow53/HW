#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, int sx, int sy, int sz);


int main(void)
{
	int n;
	printf("��J�e����L�l�ƶq: ");
	scanf_s("%d", &n);
	Hanoi(n, 1, 2, 3);
	system("pause");
	return 0;
}

void Hanoi(int n, int sx, int sy, int sz)
{
	if (n != 1)
	{
		Hanoi(n - 1, sx, sz, sy);
		printf("%d---->%d\n", sx, sz);
		Hanoi(n- 1, sy, sx, sz);
	}
	else
	{
		printf("%d---->%d\n", sx, sz);
	}
}