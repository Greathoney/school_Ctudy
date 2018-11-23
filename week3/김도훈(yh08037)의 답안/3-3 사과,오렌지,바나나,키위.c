#include <stdio.h>

int main(void)
{
	int num, i, j, cnt[4]={0,}, type=0;
	char *input, fruit[] = {'a', 'o', 'b', 'k'};
	char * name[] = {"사과", "오렌지", "바나나", "키위"};
	
	printf("과일의 개수를 입력하세요. ");
	scanf("%d", &num);
	
	input = (char*)malloc(sizeof(char)*num);
	
	printf("과일을 입력하세요. "); 
	for(i=0; i<num; i++){
		scanf(" %c", input+i);
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<num; j++){
			if(input[j] == fruit[i]){
				cnt[i] += 1;
			}
		}
	}
	
	for(i=0; i<4; i++){
		printf("%s 박스가 %d개 있습니다.\n", name[i], cnt[i]);
		if(cnt[i]){
			type++;
		}
	}
	
	printf("%d종류의 과일이 들어왔습니다.\n", type);
	
	free(input);
	return 0;
}
