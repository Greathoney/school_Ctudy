#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, *sugar, *rank, i, j;
	printf("귤의 개수를 입력하세요. ");
	scanf("%d", &num);
	
	sugar = (int*)malloc(sizeof(int)*num);
	rank = (int*)malloc(sizeof(int)*num);
	
	printf("귤의 당도를 순서대로 입력하세요.\n");
	for(i=0; i<num; i++){
		scanf("%d", sugar+i);
		rank[i] = 1;
	}
	
	for(i=0; i<num; i++){
		for(j=0; j<num; j++){
			if(sugar[j]>sugar[i]){
				rank[i]++;
			}
		}
	}
	
	for(i=0; i<num; i++){
		printf("%d ", rank[i]);
	}
	
	printf("스티커가 불여졌습니다.\n");
	
	free(sugar);
	free(rank);
	
	return 0;
}
