#include <stdio.h>

int main(void)
{
	int a;
	
	printf("1����10�܂ł̐�������͂��Ă�������\n");
	scanf("%d", &a);
	
	if (a > 0 && a <= 10) {
		printf("�����ł�\n");
	}
	else {
		printf("�ԈႢ�ł�\n");
	}
	
	return (0);
}