#include <stdio.h>

int main(void)
{
	float time;
	
	printf("�����̰� ���ϴ� �ð��� �Է��ϼ���: ");
	
	scanf("%f", &time);
	
	int hour, min, sec;
	
	hour = (int)time;
	
	time  = (time - hour)*60;
	
	min = (int)time;

	time = (time - min)*60;
	
	sec = (int)time;
	
	printf("%d�� %d�� %d��", hour, min, sec);
	
	return 0;
}
