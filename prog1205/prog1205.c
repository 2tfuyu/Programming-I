#include <stdio.h>

int main(void)
{
	int year;
	int dif;
	int wareki;
	
	printf("1900�N�ȏ�̒l�����Ă�������\n");
	printf("�N=");
	scanf("%d", &year);
	
	if (year >= 1900) {
		if (year <= 1911) {
			dif = year - 1900;
			wareki = 33;
			wareki += dif;
			printf("%d�N�͖���%d�N�ł�\n", year, wareki);
		}
		else if (year >= 1912 && year <= 1925) {
			dif = year - 1900;
			wareki = 0;
			wareki += dif - 11;
			if (wareki == 1) {
				printf("%d�N�͑吳���N�ł�\n", year);
			}
			printf("%d�N�͑吳%d�N�ł�\n", year, wareki);
		}
		else if (year >= 1926 && year <= 1988) {
			dif = year - 1900;
			wareki = 0;
			wareki += dif - 25;
			if (wareki == 1) {
				printf("%d�N�͏��a���N�ł�\n");
			}
			printf("%d�N�͏��a%d�N�ł�\n", year, wareki);
		}
		else if (year >= 1989 && year <= 2018) {
			dif = year - 1900;
			wareki = 0;
			wareki += dif - 88;
			if (wareki == 1) {
				printf("%d�N�͕������N�ł�\n");
			}
			printf("%d�N�͕���%d�N�ł�\n", year, wareki);
		}
		else {
			printf("2018�܂�\n");
		}
	}
	return (0);
}