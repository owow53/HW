#include<stdio.h>
#include<stdlib.h>

int lcm(int x, int y);

int main(void)
{
	int e, f;
	printf("��J��Ӿ��\n");
	scanf_s("%d %d", &e,&f);
	printf("�̤p������= %d\n", lcm(e,f));
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
