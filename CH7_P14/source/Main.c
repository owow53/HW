#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("C://c_code//CH7_P14//welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else
		printf("開檔失敗!!\n");
	system("pause");
	return 0;
}