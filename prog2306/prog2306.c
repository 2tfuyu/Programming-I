#include <stdio.h>

int main(void)
{
	int n, i;
	
	printf("����=");
	scanf("%d", &n); // ��������͂�����
	
	// n���
	for (i = 1; i <= n; i++) {
		// i�������Ȃ�*�A��Ȃ�+���o��
		if (i % 2 == 0) {
			printf("*");
		}
		else {
			printf("+");
		}
	}
	return (0);
}