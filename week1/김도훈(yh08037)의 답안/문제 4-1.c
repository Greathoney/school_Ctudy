#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, *sugar, *order, i, j, min_idx, temp;
	
	scanf("%d", &n);
	
	sugar = (int*)malloc(sizeof(int)*n);
	order = (int*)malloc(sizeof(int)*n);
	
	for(i=0; i<n; i++){
		scanf("%d", sugar+i);
		order[i] = i+1; 
	}
	
	for(i=0; i<n-1; i++){
		min_idx = i;
		for(j=i; j<n; j++){
			if(sugar[min_idx]>sugar[j]){
				min_idx = j;
			}
		}
		temp = sugar[min_idx];
		sugar[min_idx] = sugar[i];
		sugar[i] = temp;
		temp = order[min_idx];
		order[min_idx] = order[i];
		order[i] = temp;
	}
	
	for(i=0; i<n; i++){
		printf("%d번째 귤을 %d번째로 먹습니다.\n", order[i], i+1);
	}
	
	free(sugar);
	
	return 0;
}
