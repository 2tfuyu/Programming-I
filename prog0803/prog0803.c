#include <stdio.h>

int main(void)
{
	int ten[4];
	float heikin;
	
	ten[0] = 95;
	ten[1] = 80;
	ten[2] = 70;
	ten[3] = 100;
	heikin = (ten[0] + ten[1] + ten[2] + ten[3]) / 4.0;
	
	printf("heikin=%f\n", heikin);
	
	return  (0);
}