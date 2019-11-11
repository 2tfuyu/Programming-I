#include <stdio.h>

int main(void)
{
	int i[5];
	int fix, index;
	
	printf("数値1=");
	scanf("%d", &i[0]);
		
	printf("数値2=");
	scanf("%d", &i[1]);
		
	printf("数値3=");
	scanf("%d", &i[2]);
		
	printf("数値4=");
	scanf("%d", &i[3]);
		
	printf("数値5=");
	scanf("%d", &i[4]);
	
	printf("修正する数値番号（0なら終了)=");
	scanf("%d", &index);
	if (index == 0) {
		printf("数値の入力を終わります\n");
		return (0);
	}
	printf("数値%d=", index);
	scanf("%d", &fix);
	i[index - 1] = fix;
	
	while (index != 0) {
		printf("数値1=%d\n", i[0]);
		printf("数値2=%d\n", i[1]);
		printf("数値3=%d\n", i[2]);
		printf("数値4=%d\n", i[3]);
		printf("数値5=%d\n", i[4]);
		
		printf("修正する数値番号（0なら終了)=");
		scanf("%d", &index);
		
		if (index == 0) {
			printf("数値の入力を終わります\n");
			return (0);
		}
		
		printf("数値%d=", index);
		scanf("%d", &fix);
		
		i[index - 1] = fix;
	}
	return (0);
}