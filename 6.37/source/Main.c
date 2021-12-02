#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int recursiveMaximum(int a[], int z);

int main(void)
{
	int i = 0;
	int a[SIZE];
	printf("輸入6個整數\n");
	scanf_s("%d%d%d%d%d%d",&a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
	printf("最大值是:%d", recursiveMaximum(a,i));

	system("pause");
	return 0;
}

int recursiveMaximum(int a[], int z)
{
	int min ;
	if (z == 5)
	{
		return a[z];
	}
	if (a[z] > a[z + 1])
	{
		min = a[z + 1];
		a[z+ 1] = a[z];
		a[z] = min;
		return recursiveMaximum(a,z+1);
	}
	if (a[z] < a[z + 1])
	{
		return recursiveMaximum(a, z + 1);
	}
}