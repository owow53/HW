#include<stdio.h>
#include<stdlib.h>

int Power(int base, int exponent);

int main(void)
{
	int a, b;
	printf("��J���ƩM�����\n");
	scanf_s("%d %d", &a, &b);
	printf("����=%d\n", Power(a, b));
}
int Power(int base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	else
	{
		return Power(base, exponent - 1) * base;
	}
}