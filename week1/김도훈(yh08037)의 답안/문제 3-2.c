#include <stdio.h>

int main(void){
	int i=0, turn;
	char input, tsy[] = {'t', 's', 'y'};
	
	turn = 1; //������ �Է¹޽��ϴ� 
	
	//turn = 0; //�İ��� �Է� �޽��ϴ� 
	
	while(1){
		if(turn){
			printf("��� : ");
			scanf(" %c", &input);
			if(input!=tsy[i%3]){
				printf("YOU LOSE\n");
				break;
			}
			turn = 0;
		} 
		else{
			if(i>=30){
				printf("���� : ���\n");
				break;
			}
			printf("���� : %c\n", tsy[i%3]);
			turn = 1;
		}
		i++;
		
	}
	
	return 0;
}
