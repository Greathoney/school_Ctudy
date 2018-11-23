#include <stdio.h>

int main(void)
{
	float lent_money = 0;
	float money_rate = 0;
	int period = 0;
	
	scanf("%f %f", &lent_money, &money_rate);
	
	while (lent_money >= 1)
	{
		lent_money += lent_money * money_rate;
		period++;
	}
	
	printf("%d", period);
	
	return 0;
}
