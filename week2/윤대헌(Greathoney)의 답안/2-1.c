#include <stdio.h>
 
int main(void)
{
         	float Daehun_hour;
         	int hour, minute, second;
         	
         	printf("�ð��� �Է��ϼ���. ");
         	scanf("%f", &Daehun_hour);
         	
         	hour = Daehun_hour;
         	minute = Daehun_hour * 60 - hour * 60;
         	second = Daehun_hour * 3600 - hour * 3600 - minute * 60;
         	
         	printf("%d�� %d�� %d�� �Դϴ�.", hour, minute, second);
         	
         	return 0;
} 

