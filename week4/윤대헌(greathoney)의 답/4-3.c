
#include <stdio.h>

float correction(float ans)
{
	if (ans<0)	ans *= -1;
	if (ans>180)	ans = 360 - ans;
	
	return ans;
}

int main(void)
{
	printf("시, 분, 초를 입력하세요. ");
	
	int hour, minute, second;
	scanf("%d %d %d", &hour, &minute, &second);
	
	float hour_angle, minute_angle, second_angle;
	float ans1, ans2, ans3;
	
	second_angle = second * 6;
	minute_angle = minute * 6 + second_angle / 60;
	hour_angle = hour * 30 + minute_angle / 12;
	
	printf("시침과 분침 사이의 각도는 %.2f\n", correction(hour_angle - minute_angle));
	printf("시침과 초침 사이의 각도는 %.2f\n", correction(hour_angle - second_angle));
	printf("분침과 초침 사이의 각도는 %.2f\n", correction(minute_angle - second_angle)); 

	return 0;
}

