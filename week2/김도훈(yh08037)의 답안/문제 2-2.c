#include <stdio.h>

int main(void)
{
	const float length = 2.737;
	char name[] = {'y', 'h', 'k', 'b'};
	int i, pos[4] = {0,}, position = 0;
	float speed[4], time = 0;
	
	printf("윤씨, 한씨, 김씨, 배씨의 걷는 속도를 입력하세요. ");
	
	for(i=0; i<4; i++){
		scanf("%f", speed+i);	
	}
	
	getchar();
	
	while(1){
		printf("\n\n");
		
		//위치확인 
		for(i=0; i<4; i++){
			printf("%d", pos[i]);
		}
		printf("\n");
		
		printf("다리를 건너지 않은 사람: ");
		for(i=0; i<4; i++){
			if(pos[i]==0){
				printf("%c ", name[i]);
			}
		}
		printf("\n다리를 건넌 사람: ");
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
			
			printf("\n양산을 가져올 사람을 1명 고르세요. ");
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
			
			printf("\n다리를 건널 사람을 2명 고르세요. ");
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
	
	printf("\n\n모두 다리를 건넜습니다. 다리를 건너는데 %.2f시간 걸렸습니다.", time);
	
	return 0;
}
