#include <stdio.h>

int main(void)
{
	int day, i;
	float amount, interest;
	
	scanf("%f %f %d", &amount, &interest, &day);
	
	for(i=0; i<day; i++){
		amount += amount*interest;
	}
	
	printf("%.0f", amount);
	
	return 0;
}
