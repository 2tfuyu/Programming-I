#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((a <= 0) || (a > 100)) {
		printf("a��0�ȉ��܂���100���傫�����ł�\n");
	}
	else {
		printf("a��100�ȉ��̎��R���ł�\n");
	}
	return (0);
}