#include <stdio.h>

int main(void)
{
	int i, x;
	printf("x=");
	scanf("%d", &x);
	i = 1;
	
	while (i <= x) {
		printf("%d\n", i);
		i++;
	}
	return (0);
}