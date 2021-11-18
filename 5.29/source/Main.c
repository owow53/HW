#include<stdio.h>
#include<stdlib.h>

int lcm(int x, int y);

int main(void)
{
	int e, f;
	printf("輸入兩個整數\n");
	scanf_s("%d %d", &e,&f);
	printf("最小公倍數= %d\n", lcm(e,f));
}

int lcm(int x, int y)
{
	int c;
	
	if (x % y == 0)
	{
		c = x;
	}
	else if (y % x == 0)
	{
		c = y;
	}
	else 
	{
		 c = x * y;
	}
	return c;
}
