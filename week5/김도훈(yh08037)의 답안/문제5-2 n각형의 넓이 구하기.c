#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int y;
}POINT;

double Area_Polygon(int len, POINT *str);

int main(void){

	int numberA, numberB, i;
	POINT *locationA, *locationB;
	double areaA, areaB;

	printf("A�� �������� ���� : ");
	
	scanf("%d", &numberA);

	locationA = (POINT*)malloc(sizeof(POINT)*numberA);


	for(i=0; i<numberA; i++){
		printf("%d��° �� : ", i+1); 
		scanf("%d", &(locationA+i)->x);
		scanf("%d", &(locationA+i)->y);
	}

	
	printf("\nB�� �������� ���� : ");

	scanf("%d", &numberB);

	locationB = (POINT*)malloc(sizeof(POINT)*numberB);


	for(i=0; i<numberB; i++){
		printf("%d��° �� : ", i+1); 
		scanf("%d", &(locationB+i)->x);
		scanf("%d", &(locationB+i)->y);
	}	
		

	areaA = Area_Polygon(numberA, locationA);
	areaB = Area_Polygon(numberB, locationB);

	printf("\nA�� ���� : %.1lf\nB�� ���� : %.1lf\n\n", areaA, areaB);
	
	
	if(areaA>areaB){
		printf("A�� ������ ���̰� �� Ů�ϴ�.\n");
	}
	else if(areaA<areaB){
		printf("B�� ������ ���̰� �� Ů�ϴ�.\n");
	}
	else{
		printf("A�� B�� ������ ���̴� �����ϴ�.\n");
	}
	

	free(locationA);
	free(locationB);


	return 0;
}

double Area_Polygon(int len, POINT *arr){
	int i;
	double sum=0;

	for(i=0; i<len-1; i++){
		sum += (arr+i)->x * (arr+i+1)->y - (arr+i+1)->x * (arr+i)->y;
	}
	sum += (arr+len-1)->x * (arr)->y - (arr)->x * (arr+len-1)->y;
	
	if(sum<0){
		sum = -sum;
	} 
		
	return sum/2;
}
