#include <stdio.h>

int main(void)
{
	int i;
	
	printf("����=");
	scanf("%d", &i);
	
	if (!(i % 5 == 0)) {
		printf("5�Ŋ���؂�܂���\n");
	}
	else {
		printf("5�Ŋ���؂�܂�\n");
	}
	
	return (0);
}