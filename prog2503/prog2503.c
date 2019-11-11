#include <stdio.h>

int main(void)
{
	int month;
	
	printf("Œ=");
	scanf("%d", &month);
	
	switch (month) {
		case 3:
		case 4:
		case 5:
			printf("t‚Å‚·\n");
			break;
			
		case 6:
		case 7:
		case 8:
			printf("‰Ä‚Å‚·\n");
			break;
			
		case 9:
		case 10:
		case 11:
			printf("H‚Å‚·\n");
			break;
			
		case 12:
		case 1:
		case 2:
			printf("“~‚Å‚·\n");
			break;
			
		default:
			printf("Œ‚ªŠÔˆá‚Á‚Ä‚¢‚Ü‚·\n");
			break;
	}
	
	return (0);
}