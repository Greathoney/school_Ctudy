#include <stdio.h>

int main(void)
{
	int len_fruit = 0;
	int fruit[100] = { 0, };
	int fruit_order[100] = { 0, };
	
	scanf("%d", &len_fruit);
	
	int i = 0, j = 0;
	for (i = 0; i < len_fruit; i++)
	{
		scanf("%d", &fruit[i]);
	}
	
	for (i = 0; i < len_fruit; i++)
	{
		for (j = i+1; j < len_fruit; j++)
		{
			if (fruit[i] < fruit[j])
			{
				fruit_order[j]++;
			}
			else
			{
				fruit_order[i]++;
			}
		}
	}
	
	for (i = 0; i < len_fruit; i++)
	{
		printf("%d번째 귤을 %d번째로 먹습니다.\n", i+1, fruit_order[i]+1);
	}
	
	return 0;
}		 	 
