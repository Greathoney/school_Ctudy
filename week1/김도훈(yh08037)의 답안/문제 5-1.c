#include <stdio.h>

void one_encryption(char chr){
	if(chr%2){
		printf("%c", chr+1);
	}
	else{
		printf("%c", chr-1);
	}
}

int main(void)
{
	one_encryption('k');
	
	return 0;
}
