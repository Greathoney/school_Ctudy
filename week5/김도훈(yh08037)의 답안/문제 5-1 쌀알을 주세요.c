#include <stdio.h>

int main(void){
	int i, temp=1;
	unsigned long long sum=1;
	for(i=0; i<64; i++){
		temp *= 2;
		sum += temp;
	}
	printf("%llu", sum);
	return 0;
}
