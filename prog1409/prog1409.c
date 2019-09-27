#include <stdio.h>

int main(void)
{
	int day;
	
	printf("“ú‚É‚¿=");
	scanf("%d", &day);
	
	if ((day >= 1) && (day <= 6)) {
		printf("ö‹Æ“ú‚Å‚·\n");
	}
	else if (day == 7) {
		printf("—\”õ“ú‚Å‚·\n");
	}
	else if ((day >= 8) && (day <= 14)) {
		printf("Œ±“ú‚Å‚·\n");
	}
	else if ((day >= 15) && (day <= 16)) {
		printf("—\”õ“ú‚Å‚·\n");
	}
	else if ((day >= 17) && (day <= 23)) {
		printf("Œ±•Ô‹p“ú\n");
	}
	else {
		printf("‰Ä‹x‚İ‚Å‚·\n");
	}
	return (0);
}