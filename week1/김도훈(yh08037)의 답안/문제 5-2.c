#include <stdio.h>
#include <stdlib.h>

void one_encryption(char chr){
	if(chr%2){
		printf("%c", chr+1);
	}
	else{
		printf("%c", chr-1);
	}
}

void sentence_encryption(char * str, int n){
	int i;
	for(i=0; i<n; i++){
		one_encryption(str[i]);
	}
}

int main(void)
{
	int len, j; 
	char *input;
	
	scanf("%d", &len);
	
	input = (char*)malloc(sizeof(char)*len); 
	
	for(j=0; j<len; j++){
		scanf(" %c", input+j); 
	}
	
	sentence_encryption(input, len);	
	
	free(input);
	
	return 0;
}
