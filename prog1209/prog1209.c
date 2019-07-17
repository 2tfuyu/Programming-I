#include <stdio.h>

int main(void)
{
	int month;
	int day;
	
	printf("’a¶“ú‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	printf("ŒŽ=");
	scanf("%d", &month);
	
	printf("“ú=");
	scanf("%d", &day);
	
	if ((month == 3) && (day >= 21) || (month == 4) && (day <= 19)) {
		printf("‚ ‚È‚½‚Í‚¨‚Ð‚Â‚¶À‚Å‚·\n");
	}
	else if ((month == 4) && (day >= 20) || (month == 5) && (day <= 20)) {
		printf("‚ ‚È‚½‚Í‚¨‚¤‚µÀ‚Å‚·\n");
	}
	else if ((month == 5) && (day >= 21) || (month == 6) && (day <= 21)) {
		printf("‚ ‚È‚½‚Í‚Ó‚½‚²À‚Å‚·\n");
	}
	else if ((month == 6) && (day >= 22) || (month == 7) && (day <= 22)) {
		printf("‚ ‚È‚½‚Í‚©‚ÉÀ‚Å‚·\n");
	}
	else if ((month == 7) && (day >= 23) || (month == 8) && (day <= 22)) {
		printf("‚ ‚È‚½‚Í‚µ‚µÀ‚Å‚·\n");
	}
	else if ((month == 8) && (day >= 23) || (month == 9) && (day <= 22)) {
		printf("‚ ‚È‚½‚Í‚¨‚Æ‚ßÀ‚Å‚·\n");
	}
	else if ((month == 9) && (day >= 23) || (month == 10) && (day <= 23)) {
		printf("‚ ‚È‚½‚Í‚Ä‚ñ‚Ñ‚ñÀ‚Å‚·\n");
	}
	else if ((month == 10) && (day >= 24) || (month == 11) && (day <= 21)) {
		printf("‚ ‚È‚½‚Í‚³‚»‚èÀ‚Å‚·\n");
	}
	else if ((month == 11) && (day >= 22) || (month == 12) && (day <= 21)) {
		printf("‚ ‚È‚½‚Í‚¢‚ÄÀ‚Å‚·\n");
	}
	else if ((month == 12) && (day >= 22) || (month == 1) && (day <= 19)) {
		printf("‚ ‚È‚½‚Í‚â‚¬À‚Å‚·\n");
	}
	else if ((month == 1) && (day >= 20) || (month == 2) && (day <= 18)) {
		printf("‚ ‚È‚½‚Í‚Ý‚¸‚ª‚ßÀ‚Å‚·\n");
	}
	else if ((month == 2) && (day >= 19) || (month == 3) && (day <= 20)) {
		printf("‚ ‚È‚½‚Í‚¤‚¨À‚Å‚·\n");
	}
	return (0);
}