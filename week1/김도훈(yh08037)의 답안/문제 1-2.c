#include <stdio.h>

int main(void)
{
	int current_credit, single_semester, graduate;
	
	scanf("%d %d %d", &current_credit, &single_semester, &graduate);
	
	printf("%d", (graduate-current_credit)/single_semester+1);
	
	return 0;
}
