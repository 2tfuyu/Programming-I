#include <stdio.h>

int main(void)
{
	int i;
	
	scanf("%d",&i);
	
	if (i % 3 == 0) {
		printf("%d��3�̔{���ł��B\n", i);
	}
	else {
		printf("%d��3�̔{���ł͂���܂���B\n", i);
	}
	
	return (0);
}