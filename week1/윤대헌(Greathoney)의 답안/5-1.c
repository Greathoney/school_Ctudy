#include <stdio.h>

char one_encryption(char i)
{
	if (i%2 == 1) i++;
	else i--;
	
	return i;
}

int main(void)
{
	char i = 0;
	
	scanf("%c", &i);
	
	i = one_encryption(i);
	
	printf("%c", i);
	
	return 0;
}
