#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	
	// i��9�ɂȂ�܂�j��9���
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			// 9�񌋉ʂ��o��
			printf(" %d * %d = %.2d", i, j, i * j);
		}
		// 9��񂵏I��������s
		printf("\n");
	}
	return (0);
}