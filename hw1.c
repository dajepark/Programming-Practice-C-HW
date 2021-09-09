#include <stdio.h>

int main(void){
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if(a > 100 || a < -100 || b > 100 || b < -100 || c > 100 || c < -100)
		return 0;
	else
		printf("%d\n", a+b+c);
	return 0;
}
