#include <stdio.h>

int main(void)
{
	int i;
	int ans = 0;
	
    for (i = 1; i <= 10; i++) {
		ans += i;
    }
	printf("1����10�܂ł̍��v��%d�ł�\n", ans);
    return 0;
}