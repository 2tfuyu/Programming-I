#include <stdio.h>

int main(void)
{
	int x;
	printf("����=");
	scanf("%d", &x);
	
	if (x % 2 == 0) {
		printf("�����ł�\n");
	}
	else {
		printf("��ł�\n");
	}
	return (0);
}