#include <stdio.h>

int main(void){
	int i=0, turn;
	char input, tsy[] = {'t', 's', 'y'};
	
	turn = 1; //선공을 입력받습니다 
	
	//turn = 0; //후공을 입력 받습니다 
	
	while(1){
		if(turn){
			printf("재원 : ");			
			scanf(" %c", &input);
			if(input!=tsy[i%3]){
				printf("YOU LOSE\n");
				break;
			}
			turn = 0;
		} 
		else{
			printf("대헌 : %c\n", tsy[i%3]);
			turn = 1;
		}
		i++;
	}
	
	return 0;
}
