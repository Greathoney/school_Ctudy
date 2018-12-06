#include <stdio.h>

int main(void)
{
	unsigned long long rice = 1;
	unsigned long long total_rice = 1;

	int i, j;
	for (i = 1; i < 64; i++)
	{
		rice *= 2;
		total_rice += rice;
	}
	
	printf("준형이는 %llu톨의 쌀알을 받게 됩니다.", total_rice);
	return 0;
}

