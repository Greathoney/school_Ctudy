
#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t clock(void);
	float check_time[6] = {0, };
	float plus_minus[5] = {0, };
    int score[5] = {0, };
    int total = 0;
	int i = 0;
	char empty;
	
	printf("���͸� ���� �����մϴ�. 3�ʸ��� ����Ű�� 1���� �� 5�� ��������.\n");
	scanf("%c", &empty);
	check_time[0] = clock();
	for (i = 1; i<=5; i++)
	{
		scanf("%c", &empty);
		check_time[i] = clock();
	}
	
	printf("���� �ɸ��� �ð��� ");
	for (i = 0; i<5; i++)
	{
		plus_minus[i] = check_time[i+1] - check_time[i];
		printf("%.3f ",plus_minus[i]/1000);
	}
	printf("�� �Դϴ�.\n");
	
	printf("������ ������ ");
	for (i = 0; i<5; i++)
	{
		if (2950<=plus_minus[i] && plus_minus[i] <= 3050)
			score[i] = 20;
		else if (2900<=plus_minus[i] && plus_minus[i] <= 3100)
		    score[i] = 12;
		else if (2850<=plus_minus[i] && plus_minus[i] <= 3150)
		    score[i] = 7;
		else if (2800<=plus_minus[i] && plus_minus[i] <= 3200)
		    score[i] = 3;
		printf("%d ", score[i]);
	}
	printf("�Դϴ�.\n");
	
	printf("������");
	for (i = 0; i<5; i++)
	{
		total += score[i];
	}
	printf(" %d�� �Դϴ�.\n", total);
	
	scanf("%c", &empty);
}

