
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int len_tangerine = 0;
	printf("������� ������ �Է��ϼ���. ");
	scanf("%d", &len_tangerine);

	int tangerine[10] = { 0, };
	
	printf("������� ���̸� ������� �Է��ϼ���.\n");
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

	printf("����⸦ ���ġ�Ͽ����ϴ�.\n");

	return 0;
}




