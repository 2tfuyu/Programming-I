#include <stdio.h>

int main(void)
{
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%d\n", j);
		}
	}
	return (0);
}