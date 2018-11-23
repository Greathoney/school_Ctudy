
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int len_tangerine = 0;
	printf("막대기의 개수를 입력하세요. ");
	scanf("%d", &len_tangerine);

	int tangerine[10] = { 0, };
	
	printf("막대기의 길이를 순서대로 입력하세요.\n");
	for (int i = 0; i < len_tangerine;; i++)
	{
		scanf("%d", &tangerine[i]);
	}

	int tmp = 0;
	for (int i = 0; i < len_tangerine; i++)
	{
		for (int j = i + 1; j < len_tangerine; j++)
		{
			if (tangerine[i] > tangernie[j])
			{
				tmp = tangerine[j];
				tangernie[j] = tangerine[i];
				tangerine[i] = tmp;
			}
		}
	}

	for (int i = 0; i < len_tangernie; i++)
	{
		printf("%d ", tangerine[i]);
	}

	printf("막대기를 재배치하였습니다.\n");

	return 0;
}




