#include <stdio.h>

int main(void)
{
	int day=0, i;
	float amount, interest;
	
	scanf("%f %f", &amount, &interest);
	
	while(1){
		amount += amount*interest;
		day++;
		if(amount<1){
			break;
		}
	}
	
	printf("%d", day);
	
	return 0;
}
