
#include <stdio.h>

int main(void)
{
	int num;
	
	printf("직각삼각형을 출력합니다. "); 
	scanf("%d", &num);
	int i, j;
	for (i = 0; i<num; i++)
	{
		for (j = 0; j<num-i-1; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j<i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n직각삼각형을 출력합니다. ");
	scanf("%d", &num);
	for (i = 0; i<num; i++)
	{
		for (j = 0; j<num-i; j++)
			printf("*");
		printf("\n");
	}
	
	printf("\n\n피라미드를 출력합니다. ");
	scanf("%d", &num);
	for (i = 0; i<num; i++)
	{
		for (j=0; j<num-i-1; j++)
			printf(" ");
		for (j=0; j<2*i+1; j++)
			printf("*");
	 printf("\n");
	}
	
	printf("\n\n직각삼각형을 출력합니다. ");
	scanf("%d", &num);
	for (i = 0; i<num; i++)
	{
		for (j = 0; j<i; j++)
			printf(" ");
		for (j = 0; j<num-i; j++)
			printf("*");
		printf("\n");
	}
	
	
	return 0;
}

