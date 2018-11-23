#include <stdio.h>

int main(void)
{
	float num;
	scanf("%f", &num);
	
	int i;
	for (i = 1; i<num; i++)
	{
		printf("%d ", i);
		if (i%5==0)
			printf("\n");
	}
	
	return 0;
}

