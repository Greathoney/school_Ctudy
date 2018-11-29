#include <stdio.h>

int main(void)
{
	int n, i, j;
	printf("길이를 입력하세요. ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0){
				printf("*");
			}
			else if(i==n-1){
				printf("`");
			}
			else if(i%2==1){
				if(j==0||j==n-1){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			else if(i%2==0){
				if(j==0||j==n-1){
					printf("*");
				}
				else{
					if(j%2==0){
						printf("D");
					}
					else{
						printf(" ");
					}
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
