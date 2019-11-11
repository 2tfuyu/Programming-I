#include <stdio.h>

int main(void)
{
	int i;
	scanf("%d", &i);
	
	switch (i % 3) {
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
	}
	return (0);
}