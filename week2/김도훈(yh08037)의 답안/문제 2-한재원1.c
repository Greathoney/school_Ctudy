#include <stdio.h>

int main(void)
{
	int n, i, j;
	
	printf("직각삼각형을 출력합니다. ");
	scanf("%d", &n); 
	
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			printf(" ");
		}
		for(j=0; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("직각삼각형을 출력합니다. ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n-i; j++){
			printf("*");
		}
		printf("\n");
	} 
	
	printf("피라미드를 풀력합니다. ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			printf(" ");
		}
		for(j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("직각삼각형을 출력합니다. ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			printf(" ");
		}
		for(j=0; j<n-i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
