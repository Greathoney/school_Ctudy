#include <stdio.h>

int main(void)
{
	int num, i, j, cnt[4]={0,}, type=0;
	char *input, fruit[] = {'a', 'o', 'b', 'k'};
	char * name[] = {"���", "������", "�ٳ���", "Ű��"};
	
	printf("������ ������ �Է��ϼ���. ");
	scanf("%d", &num);
	
	input = (char*)malloc(sizeof(char)*num);
	
	printf("������ �Է��ϼ���. "); 
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
		printf("%s �ڽ��� %d�� �ֽ��ϴ�.\n", name[i], cnt[i]);
		if(cnt[i]){
			type++;
		}
	}
	
	printf("%d������ ������ ���Խ��ϴ�.\n", type);
	
	free(input);
	return 0;
}
