#include <stdio.h>

int main(void)
{
	
	int cnt=1;
	float n;
	
	scanf("%f", &n);
	
	while(cnt<n){
		printf("%2d ", cnt);
		if(cnt%5==0){
			printf("\n");
		}
		cnt++;
	}
	
	return 0;
}
