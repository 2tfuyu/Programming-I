#include <stdio.h>

int main(void)
{
	int x;
	int i = 0;
	printf("x=");
	
	scanf("%d", &x);
	
	while (i < x) {
		printf("x");
		i++;
	}
	
	return (0);
}