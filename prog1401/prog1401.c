#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((0 < a) && (a <= 100)) {
		printf("a��100�ȉ��̎��R���ł�\n");
	}
	else {
		printf("a�͕��܂���100���傫�����ł�");
	}
	return (0);
}