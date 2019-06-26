#include <stdio.h>

int main(void)
{
	int total_time;
	int minute;
	int second;
	
	total_time = 201;
	minute = total_time / 60;
	second = total_time % 60;
	
	printf("%d•b‚Í%d•ª%d•b‚Å‚·\n", total_time, minute, second);
	
	return (0);
}