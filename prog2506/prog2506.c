#include <stdio.h>

int main(void)
{
	int region;
	
	printf("¼Œ´F1  –k’†éF2  ‰«“ê“ìF3  ‰«“ê–kF4\n");
	printf("ÎìF5  ‰®‰Ã  F6  ‹à•  F7  ‹X–ìÀF8  ‹–“cF9\n");
	
	printf("—˜—p‹æŠÔ=");
	scanf("%d", &region);
	
	switch (region) {
	  case 1:
		printf("—¿‹à‚Í%d‰~‚Å‚·\n", 200);
		break;
			
	  case 2:
		printf("—¿‹à‚Í%d‰~‚Å‚·\n", 300);
		break;
			
		case 3:
			printf("—¿‹à‚Í%d‰~‚Å‚·\n", 400);
			break;
			
		case 4:
			printf("—¿‹à‚Í%d‰~‚Å‚·\n", 500);
			break;
			
		case 5:
			printf("—¿‹à‚Í%d‰~‚Å‚·\n", 600);
			break;
			
		case 6:
			printf("—¿‹à‚Í%d‰~‚Å‚·\n", 700);
			break;
			
		case 7:
			printf("—¿‹à‚Í%d‰~‚Å‚·\n", 750);
			break;
			
		case 8:
			printf("—¿‹à‚Í%d‰~‚Å‚·\n", 850);
			break;
			
		case 9:
			printf("—¿‹à‚Í%d‰~‚Å‚·\n", 1000);
			break;
			
		default:
			printf("—˜—p‹æŠÔ‚ªŠÔˆá‚Á‚Ä‚¢‚Ü‚·\n");
			break;
	}
	
	return (0);
}