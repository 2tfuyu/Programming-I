#include <stdio.h>

int main(void)
{
	int seireki;
	
	printf("����=");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0) {
		if (seireki % 100 == 0) {
			if (seireki % 400 == 0) {
				printf("���Ƃ��͂��邤�N�ł�\n");
				return (0);
			}
			printf("���Ƃ��͂��邤�N�ł͂���܂���\n");
			return (0);
		}
		printf("���Ƃ��͂��邤�N�ł�\n");
	}
	return (0);
}