#include <stdio.h>

int main(void)
{
	int month;
	int day;
	
	printf("�a��������͂��Ă�������\n");
	printf("��=");
	scanf("%d", &month);
	
	printf("��=");
	scanf("%d", &day);
	
	if ((month == 3) && (day >= 21) || (month == 4) && (day <= 19)) {
		printf("���Ȃ��͂��Ђ����ł�\n");
	}
	else if ((month == 4) && (day >= 20) || (month == 5) && (day <= 20)) {
		printf("���Ȃ��͂��������ł�\n");
	}
	else if ((month == 5) && (day >= 21) || (month == 6) && (day <= 21)) {
		printf("���Ȃ��͂ӂ������ł�\n");
	}
	else if ((month == 6) && (day >= 22) || (month == 7) && (day <= 22)) {
		printf("���Ȃ��͂��ɍ��ł�\n");
	}
	else if ((month == 7) && (day >= 23) || (month == 8) && (day <= 22)) {
		printf("���Ȃ��͂������ł�\n");
	}
	else if ((month == 8) && (day >= 23) || (month == 9) && (day <= 22)) {
		printf("���Ȃ��͂��Ƃߍ��ł�\n");
	}
	else if ((month == 9) && (day >= 23) || (month == 10) && (day <= 23)) {
		printf("���Ȃ��͂Ă�т���ł�\n");
	}
	else if ((month == 10) && (day >= 24) || (month == 11) && (day <= 21)) {
		printf("���Ȃ��͂�������ł�\n");
	}
	else if ((month == 11) && (day >= 22) || (month == 12) && (day <= 21)) {
		printf("���Ȃ��͂��č��ł�\n");
	}
	else if ((month == 12) && (day >= 22) || (month == 1) && (day <= 19)) {
		printf("���Ȃ��͂€���ł�\n");
	}
	else if ((month == 1) && (day >= 20) || (month == 2) && (day <= 18)) {
		printf("���Ȃ��݂͂����ߍ��ł�\n");
	}
	else if ((month == 2) && (day >= 19) || (month == 3) && (day <= 20)) {
		printf("���Ȃ��͂������ł�\n");
	}
	return (0);
}