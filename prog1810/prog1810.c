#include <stdio.h>

int main(void)
{
	int i, j, m;

	m = 0;
	scanf("%d", &i);
	
	while (m < ((i - 1) - 2)) {
		if (i % (m + 2) == 0) {
			printf("%d�͑f���ł͂Ȃ�\n", i);
			return (0);
		}
		m++;
	}
	printf("%d�͑f��\n", i);
	return (0);
}