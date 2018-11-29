#include <stdio.h>
//너무 많은 시행에 대해서는 생각을 잘 하지 못하겠습니다 ㅜㅜ
int main(void)
{
	int max_bottle_A, max_bottle_B, max_bottle_C;
	printf("물통의 최대 용량을 입력하세요. ");
	scanf("%d%d%d", &max_bottle_A, &max_bottle_B, &max_bottle_C);

	int bottle_A = max_bottle_A;
	int bottle_B = 0;
	int bottle_C = 0;

	int existed_case[82000][3] = { 0, };
	int cnt = 0;

	int i;
	int empty_memory;
	while (1)
	{
		// A에 들어있는 물을 C로 붓기
		empty_memory = max_bottle_C - bottle_C;
		if (empty_memory > bottle_A)
		{
			bottle_C += bottle_A;
			bottle_A = 0;
		}
		else
		{
			bottle_C = max_bottle_C;
			bottle_A -= empty_memory;
		}

		printf("%d회차 - A:%d, B:%d, C:%d\n", 3 * cnt + 1, bottle_A, bottle_B, bottle_C);

		//C에 들어있는 물을 B로 붓기
		empty_memory = max_bottle_B - bottle_B;
		if (empty_memory > bottle_C)
		{
			bottle_B += bottle_C;
			bottle_C = 0;
		}
		else
		{
			bottle_B = max_bottle_B;
			bottle_C -= empty_memory;
		}

		printf("%d회차 - A:%d, B:%d, C:%d\n", 3 * cnt + 2, bottle_A, bottle_B, bottle_C);

		//B가 가득찼다고 생각되면 A로 버리고 C에 B를 넣기
		if (bottle_B == max_bottle_B)
		{
			bottle_A += bottle_B;
			bottle_B = bottle_C;
			bottle_C = 0;
		}

		printf("%d회차 - A:%d, B:%d, C:%d\n", 3 * cnt + 3, bottle_A, bottle_B, bottle_C);

		//A와 B가 같으면 탈출
		if (bottle_A == bottle_B)
		{
			break;
		}

		for (i = 0; i < cnt; i++)
		{
			if (existed_case[i][0] == bottle_A && existed_case[i][1] == bottle_B && existed_case[i][2] == bottle_C)
			{
				printf("not exist, because duplicate.\n");
				return 0;
			}
		}

		existed_case[cnt][0] = bottle_A;
		existed_case[cnt][1] = bottle_B;
		existed_case[cnt][2] = bottle_C;
		
		cnt++;
	}



	return 0;
}

