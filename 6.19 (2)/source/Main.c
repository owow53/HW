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
	int i, c, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0;
	for (i = 0; i < SIZE; i++)
	{
		printf("%10d", z[i]);
	}
	printf("\n");
	for (i = 0; i < 36000; i++)
	{
		a = 1 + rand() % (6);
		b = 1 + rand() % (6);
		
		c = a + b;

		switch (c)
		{
		case 2:
			j++;
			break;
		case 3:
			k++;
			break;
		case 4:
			l++;
			break;
		case 5:
			m++;
			break;
		case 6:
			n++;
			break;
		case 7:
			o++;
			break;
		case 8:
			p++;
			break;
		case 9:
			q++;
			break;
		case 10:
			r++;
			break;
		case 11:
			s++;
			break;
		case 12:
			t++;
			break;
		}
	}
	printf("%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d\n", j, k, l, m, n, o, p, q, r, s, t);
	system("pause");
	return 0;

}