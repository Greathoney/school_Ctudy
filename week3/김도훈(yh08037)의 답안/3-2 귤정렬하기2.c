#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, *sugar, i;
	
	printf("���� ������ �Է��ϼ���. ");
	scanf("%d", &num);
	
	sugar = (int*)malloc(sizeof(int)*num);
	
	printf("���� �絵�� ������� �Է��ϼ���.\n");
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
	
	printf("���� ���ġ�Ͽ����ϴ�.\n");
	
	free(sugar);
	
	return 0;
}
