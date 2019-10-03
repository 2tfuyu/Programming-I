#include <stdio.h>

int main(void)
{
	
	int x;
	int y;
	int i;
	
	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);
	
	
    for (i = x; i <= y; i++) {
        printf("%d\n", i);
    }
    return 0;
}