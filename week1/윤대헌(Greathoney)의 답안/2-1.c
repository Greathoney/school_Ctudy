#include <stdio.h>

int main(void)
{
	float lent_money = 0;
	float money_rate = 0;
	int period = 0;
	
	scanf("%f %f %d", &lent_money, &money_rate, &period);
	
	int i = 0;
	for (i = 0; i<period; i++)
	{
		lent_money += lent_money * money_rate;
	}
	
	printf("�����̰� ���ƾ� �� ���� %.1f�� �Դϴ�.", lent_money);
	
	return 0;
}
