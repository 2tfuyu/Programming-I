#include <stdio.h>

int main(void)
{
	int n;
	
	printf("�ԍ�=");
	scanf("%d", &n);
	
	if ((n == 2) || (n == 4) || (n == 5) || (n == 7) || (n == 8) || (n == 9) || (n == 10)) {
		printf("�j�q�ł�\n");
	}
	else {
		printf("���q�ł�\n");
	}
	return (0);
}