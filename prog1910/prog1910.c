#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	
	while (x <= y) {
		printf("%d\n", x);
		x++;
	}
	return (0);
}