#include <stdio.h>

int main(void)
{
	int len;
	printf("길이를 입력하세요. ");
	scanf("%d", &len);
	
	int i, j;
	for (i = 0; i < len; i++)	printf("*");
	
	printf("\n");
	for (i = 1; i < len-1; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (i % 2 == 1)
			{
				if (j == 0 || j == len - 1) printf("*");
				else printf(" ");
			}
			else
			{
				if (j == 0 || j == len - 1) printf("*");
				else if (j % 2 == 0)	printf("D");
				else printf(" ");
			}
		}
		printf("\n");
	}
	
	for (i = 0; i < len; i++)	printf("`");
	return 0;

