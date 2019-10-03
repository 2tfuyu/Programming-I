#include <stdio.h>

int main(void)
{
	
	int x;
	int i;
	printf("x=");
	scanf("%d", &x);
	
    for (i = 0; i < x; i++) {
        printf("Hello, World\n");
    }
    return 0;
}