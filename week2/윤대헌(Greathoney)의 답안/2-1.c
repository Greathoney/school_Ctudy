#include <stdio.h>
 
int main(void)
{
         	float Daehun_hour;
         	int hour, minute, second;
         	
         	printf("시간을 입력하세요. ");
         	scanf("%f", &Daehun_hour);
         	
         	hour = Daehun_hour;
         	minute = Daehun_hour * 60 - hour * 60;
         	second = Daehun_hour * 3600 - hour * 3600 - minute * 60;
         	
         	printf("%d시 %d분 %d초 입니다.", hour, minute, second);
         	
         	return 0;
} 

