#include <stdio.h>

int main(void)
{
	int i;
	
	printf("1����10�܂ł̐�������͂��Ă�������\n");
	
	scanf("%d", &i);
	
	if ((i >= 1) && (i <= 10)) {
		printf("�����ł�\n");
	}
	else {
		printf("�ԈႢ�ł�\n");
	}
	return (0);
}