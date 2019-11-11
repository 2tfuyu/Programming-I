#include <stdio.h>

int main(void)
{
	int x;
	int i;
	printf("x=");
	scanf("%d", &x);
	
	for (i = 3; i <= x; i += 3) {
		printf("%d\n", i);
	}
	return (0);
}