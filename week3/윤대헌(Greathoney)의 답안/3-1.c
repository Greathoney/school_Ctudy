#include <stdio.h>

int main(void)
{
	int len_tangerine = 0;
	printf("���� ������ �Է��ϼ���. ");
	scanf("%d", &len_tangerine);

	printf("���� ���̸� ������� �Է��ϼ���");
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

	printf("��ƼĿ�� �ٿ������ϴ�.\n");

	return 0;
}



