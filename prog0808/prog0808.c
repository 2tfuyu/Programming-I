#include <stdio.h>

int main(void)
{
	int suuji;
	int futaketa;
	
	suuji = 283;
	// futaketa = (suuji % 100 - 3) / 10;
	futaketa = (suuji % 10) % 10;
	printf("%d��2���ڂ̐�����%d�ł�\n", suuji, futaketa);
	
	return (0);
}