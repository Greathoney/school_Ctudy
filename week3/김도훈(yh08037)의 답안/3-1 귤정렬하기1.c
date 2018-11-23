#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, *sugar, *rank, i, j;
	printf("���� ������ �Է��ϼ���. ");
	scanf("%d", &num);
	
	sugar = (int*)malloc(sizeof(int)*num);
	rank = (int*)malloc(sizeof(int)*num);
	
	printf("���� �絵�� ������� �Է��ϼ���.\n");
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
	
	printf("��ƼĿ�� �ҿ������ϴ�.\n");
	
	free(sugar);
	free(rank);
	
	return 0;
}
