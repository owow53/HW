#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 11

int main(void)
{
	srand(time(0));
	int z[SIZE] = { 2,3,4,5,6,7,8,9,10,11,12 };
	int a = 1 + rand() % (6);
	int b = 1 + rand() % (6);
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		printf("d");
	}
	system("pause");
	return 0;


}