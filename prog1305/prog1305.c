#include <stdio.h>

int main(void)
{
	int a;
	
	scanf("%d", &a);
	
	if (0 <= a <= 1) {
		printf("aは0以上1以下です\n");
	}
	return (0);
}