#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char c = 'a';
	printf("¿é¤J¤@­Ó¦r¥À\n");
	scanf_s("%c", &c);
	if (c > 64 && c < 97)
		c = c + 32;
	else if (c > 96 && c < 129)
		c = c - 32;

	printf("%c\n", c);

	system("pause");
	return 0;
}