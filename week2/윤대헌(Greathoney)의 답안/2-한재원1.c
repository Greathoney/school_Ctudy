
#include <stdio.h>

int main(void)
{
	int num;
	
	printf("�����ﰢ���� ����մϴ�. "); 
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
	
	printf("\n\n�����ﰢ���� ����մϴ�. ");
	scanf("%d", &num);
	for (i = 0; i<num; i++)
	{
		for (j = 0; j<num-i; j++)
			printf("*");
		printf("\n");
	}
	
	printf("\n\n�Ƕ�̵带 ����մϴ�. ");
	scanf("%d", &num);
	for (i = 0; i<num; i++)
	{
		for (j=0; j<num-i-1; j++)
			printf(" ");
		for (j=0; j<2*i+1; j++)
			printf("*");
	 printf("\n");
	}
	
	printf("\n\n�����ﰢ���� ����մϴ�. ");
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

