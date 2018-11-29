
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
	
	printf("엔터를 눌러 시작합니다. 3초마다 엔터키를 1번씩 총 5번 누르세요.\n");
	scanf("%c", &empty);
	check_time[0] = clock();
	for (i = 1; i<=5; i++)
	{
		scanf("%c", &empty);
		check_time[i] = clock();
	}
	
	printf("각각 걸리는 시간은 ");
	for (i = 0; i<5; i++)
	{
		plus_minus[i] = check_time[i+1] - check_time[i];
		printf("%.3f ",plus_minus[i]/1000);
	}
	printf("초 입니다.\n");
	
	printf("각각의 점수는 ");
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
	printf("입니다.\n");
	
	printf("총점은");
	for (i = 0; i<5; i++)
	{
		total += score[i];
	}
	printf(" %d점 입니다.\n", total);
	
	scanf("%c", &empty);
}

