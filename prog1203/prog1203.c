#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	printf("�����l1=");
	scanf("%d", &a);
	
	printf("�����l2=");
	scanf("%d", &b);
	
	if (a == b) {
		printf("2�̐��͓����l�ł�\n");
	}
	else if (a < b) {
		printf("%d���%d�̕������������l�ł�\n", a, b);
	}
	else {
		printf("%d���%d�̕����傫���l�ł�\n", b, a);
	}
	
	return (0);
}