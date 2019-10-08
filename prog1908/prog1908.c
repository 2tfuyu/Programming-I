#include <stdio.h>

int main(void)
{
	int i, x;
	printf("x=");
	scanf("%d", &x);
	i = 0;
	
	while (i < x) {
		printf("Hello, Wolrd\n");
		i++;
	}
	return (0);
}