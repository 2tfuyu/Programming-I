#include <stdio.h>

int main(void)
{
	int year;
	int dif;
	int wareki;
	
	printf("1900年以上の値を入れてください\n");
	printf("年=");
	scanf("%d", &year);
	
	if (year >= 1900) {
		if (year <= 1911) {
			dif = year - 1900;
			wareki = 33;
			wareki += dif;
			printf("%d年は明治%d年です\n", year, wareki);
		}
		else if (year >= 1912 && year <= 1925) {
			dif = year - 1900;
			wareki = 0;
			wareki += dif - 11;
			if (wareki == 1) {
				printf("%d年は大正元年です\n", year);
			}
			printf("%d年は大正%d年です\n", year, wareki);
		}
		else if (year >= 1926 && year <= 1988) {
			dif = year - 1900;
			wareki = 0;
			wareki += dif - 25;
			if (wareki == 1) {
				printf("%d年は昭和元年です\n");
			}
			printf("%d年は昭和%d年です\n", year, wareki);
		}
		else if (year >= 1989 && year <= 2018) {
			dif = year - 1900;
			wareki = 0;
			wareki += dif - 88;
			if (wareki == 1) {
				printf("%d年は平成元年です\n");
			}
			printf("%d年は平成%d年です\n", year, wareki);
		}
		else {
			printf("2018まで\n");
		}
	}
	return (0);
}