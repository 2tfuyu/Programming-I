#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n); // ��������͂�����
	
	i = 1;
	// 1����n�܂ł��o�͂���
	while (i <= n) {
		printf("%d\n", i);
		i += 2;
	}
	return (0);
}