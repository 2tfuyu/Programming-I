#include <stdio.h>

int main(void)
{
	int day;
	
	printf("���ɂ�=");
	scanf("%d", &day);
	
	if ((day >= 1) && (day <= 6)) {
		printf("���Ɠ��ł�\n");
	}
	else if (day == 7) {
		printf("�\�����ł�\n");
	}
	else if ((day >= 8) && (day <= 14)) {
		printf("�������ł�\n");
	}
	else if ((day >= 15) && (day <= 16)) {
		printf("�\�����ł�\n");
	}
	else if ((day >= 17) && (day <= 23)) {
		printf("�����ԋp��\n");
	}
	else {
		printf("�ċx�݂ł�\n");
	}
	return (0);
}