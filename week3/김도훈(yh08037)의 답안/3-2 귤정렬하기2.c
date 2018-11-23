#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, *sugar, i;
	
	printf("귤의 개수를 입력하세요. ");
	scanf("%d", &num);
	
	sugar = (int*)malloc(sizeof(int)*num);
	
	printf("귤의 당도를 순서대로 입력하세요.\n");
	for(i=0; i<num; i++){
		scanf("%d", sugar+i);
	}
	
	int j, min_index, temp;
	
	for(i=0; i<num-1; i++){
		min_index = i;
		for(j=i+1; j<num; j++){
			if(sugar[j]<sugar[min_index]){
				min_index = j;
			}
		}
		temp = sugar[min_index];
		sugar[min_index] = sugar[i];
		sugar[i] = temp;
	}
	
	for(i=0; i<num; i++){
		printf("%d ", sugar[i]);
	}
	
	printf("귤을 재배치하였습니다.\n");
	
	free(sugar);
	
	return 0;
}
