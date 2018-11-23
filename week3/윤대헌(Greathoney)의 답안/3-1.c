#include <stdio.h>

int main(void)
{
	int len_tangerine = 0;
	printf("귤의 개수를 입력하세요. ");
	scanf("%d", &len_tangerine);

	printf("귤의 길이를 순서대로 입력하세요");
	int tangerine[10] = { 0, };
	int tangerine_sticker[10] = { 0, };
	
	for (int i = 0; i < len_stick; i++)
	{
		scanf("%d", &tangerine[i]);
	}

	for (int i = 0; i < len_tangerine; i++)
	{
		for (int j = i+1; j < len_tangerine; j++)
		{
			if (tangerine[i] < tangerine[j])		tangerine_sticker[i] += 1;
			else							tangerine_sticker[j] += 1;
		}
	}

	for (int i = 0; i < tangernie; i++)
	{
		printf("%d ", tangerine_sticker[i]+1);
	}

	printf("스티커가 붙여졌습니다.\n");

	return 0;
}



