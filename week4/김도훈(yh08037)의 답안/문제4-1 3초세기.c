#include <stdio.h>
#include <time.h>

int judge(float record);

int main(void)
{
	clock_t clock(void);
	int i, score[5], sum=0;
	float time1, time2, time[5];
	char empty;
	
	printf("���͸� ���� �����մϴ�. 3�ʸ��� ����Ű�� 5�� ��������.");

	scanf("%c", &empty);
	time1 = clock();
	
	for(i=0; i<5; i++){
		
		scanf("%c", &empty);
		time2 = clock();
		
		time[i] = (time2 - time1)/1000;
		score[i] = judge(time[i]);
		sum += score[i];
		
		time1 = time2;
	}
	
	printf("���� �����Ű�µ� �ɸ��� �ð��� %.3f %.3f %.3f %.3f %.3f�� �Դϴ�.\n", time[0], time[1], time[2], time[3], time[4]);
	
	printf("������ ������ %d %d %d %d %d���̰�, �� %d���Դϴ�.\n", score[0], score[1], score[2], score[3], score[4], sum);
	return 0;
}

int judge(float record){
	int result;
	
	if(record<3+0.05&&record>3-0.05){
		result = 20;
	}
	else if(record<3+0.1&&record>3-0.1){
		result = 12;
	}
	else if(record<3+0.15&&record>3-0.15){
		result = 7;
	}
	else if(record<3+0.2&&record>3-0.2){
		result = 3;
	}
	else{
		result = 0;
	}
	
	return result;
}
