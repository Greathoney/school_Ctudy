#include <stdio.h>

int main(void)
{
	float time;
	
	printf("대헌이가 말하는 시각을 입력하세요: ");
	
	scanf("%f", &time);
	
	int hour, min, sec;
	
	hour = (int)time;
	
	time  = (time - hour)*60;
	
	min = (int)time;

	time = (time - min)*60;
	
	sec = (int)time;
	
	printf("%d시 %d분 %d초", hour, min, sec);
	
	return 0;
}
