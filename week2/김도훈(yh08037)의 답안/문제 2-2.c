#include <stdio.h>

int main(void)
{
	const float length = 2.737;
	char name[] = {'y', 'h', 'k', 'b'};
	int i, pos[4] = {0,}, position = 0;
	float speed[4], time = 0;
	
	printf("����, �Ѿ�, �达, �达�� �ȴ� �ӵ��� �Է��ϼ���. ");
	
	for(i=0; i<4; i++){
		scanf("%f", speed+i);	
	}
	
	getchar();
	
	while(1){
		printf("\n\n");
		
		//��ġȮ�� 
		for(i=0; i<4; i++){
			printf("%d", pos[i]);
		}
		printf("\n");
		
		printf("�ٸ��� �ǳ��� ���� ���: ");
		for(i=0; i<4; i++){
			if(pos[i]==0){
				printf("%c ", name[i]);
			}
		}
		printf("\n�ٸ��� �ǳ� ���: ");
		for(i=0; i<4; i++){
			if(pos[i]==1){
				printf("%c ", name[i]);
			}
		}
		
		if(pos[0]*pos[1]*pos[2]*pos[3]){
			break;
		}
		
		else if(position){
			char temp; 
			
			printf("\n����� ������ ����� 1�� ������. ");
			scanf("%c", &temp);
			getchar();
			
			for(i=0; i<4; i++){
				if(temp==name[i]){
					pos[i] = 0;
					time += length/speed[i];
				}
			}
			
			position = 0;
		}
		
		else{
			char temp1 ,temp2;
			int index1, index2; 
			
			printf("\n�ٸ��� �ǳ� ����� 2�� ������. ");
			scanf("%c %c", &temp1, &temp2);
			getchar();
			
			for(i=0; i<4; i++){
				if(temp1==name[i]){
					index1 = i;
				}
				else if(temp2==name[i]){
					index2 = i;
				}
			}
			
			pos[index1] = 1;
			pos[index2] = 1;
			
			if(speed[index1]>speed[index2]){
				time += length/speed[index2];
			}
			else{
				time += length/speed[index1];	
			}
			
			position = 1;
		}
	}
	
	printf("\n\n��� �ٸ��� �ǳԽ��ϴ�. �ٸ��� �ǳʴµ� %.2f�ð� �ɷȽ��ϴ�.", time);
	
	return 0;
}
