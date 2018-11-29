#include <stdio.h>

int main(void)
{
	float hour, minute, second;
	float deg_h, deg_m, deg_s;
	float hm, hs, ms;
	
	printf("��, ��, �ʸ� �Է��ϼ���. ");
	scanf("%f %f %f", &hour, &minute, &second);
	if(hour==12){
		hour = 0;
	}
	
	deg_s = second*6;
	deg_m = minute*6+deg_s/60;
	deg_h = hour*30+deg_m/12;
	
	hm = deg_h-deg_m;
	hs = deg_h-deg_s;
	ms = deg_m-deg_s;
	
	if(hm<0) hm = -hm;
	if(hm>180) hm = 360 - hm;
	
	if(hs<0) hs = -hs;
	if(hs>180) hs = 360 - hs;
	
	if(ms<0) ms = -ms;
	if(ms>180) ms = 360 - ms;
	
	
	printf("��ħ�� ��ħ ������ ������ %.2f�� �Դϴ�.\n", hm);
	printf("��ħ�� ��ħ ������ ������ %.2f�� �Դϴ�.\n", hs);
	printf("��ħ�� ��ħ ������ ������ %.2f�� �Դϴ�.\n", ms);
	
	return 0;
	 
} 
