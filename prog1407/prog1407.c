#include <stdio.h>

int main(void)
{
	int i;
	
	printf("�^���Ґ�=");
	scanf("%d", &i);
	
	if ((i >= 21) && (i <= 41)) {
		printf("�������ŉ����܂����B\n");
	}
	else {
		printf("�ی����܂���\n");
	}
	return (0);
}