#include <stdio.h>

int main(void)
{
	int single_semester, graduate;
	
	scanf("%d %d", &single_semester, &graduate);
	
	printf("%d", graduate/single_semester+1);
	
	return 0;
}
