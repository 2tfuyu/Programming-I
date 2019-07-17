#include <stdio.h>

int main(void) {
	int day;
	int data[] = {"Œ", "‰Î", "…", "–Ø", "‹à", "“y", "“ú"};
	
	printf("7Œ‰½“ú‚Å‚·‚©H\n");
	printf("“ú‚É‚¿=");
	scanf("%d", &day);
	
	if (day <= 7) {
		printf("7Œ%d“ú‚Í%s—j“ú‚Å‚·\n", day, data[day - 1]);
	}
	else if (day >= 8 && day <= 14) {
		printf("7Œ%d“ú‚Í%s—j“ú‚Å‚·\n", day, data[day - 7]);
	}
	else if (day >= 15 && day <= 21) {
		printf("7Œ%d“ú‚Í%s—j“ú‚Å‚·\n", day, data[day - (7 * 2) - 1]);
	}
	else if (day >= 22 && day <= 28) {
		printf("7Œ%d“ú‚Í%s—j“ú‚Å‚·\n", day, data [day - (7 * 3) - 1]);
	}
	else {
		printf("7Œ%d“ú‚Í%s—j“ú‚Å‚·\n", day, data [day - (7 * 4) - 1]);
	}
	return (0);
}