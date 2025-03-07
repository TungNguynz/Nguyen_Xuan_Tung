#include <stdio.h>

int main() {
	int a, b, c;
	printf("Hay nhap 3 so a,b,c:\n ");
	scanf_s("%d %d %d", &a,&b,&c);
	if (a >= b && a >= c) {
		printf("%d la so lon nhat", a);
	}else if (b >= c && b >= a) {
		printf("%d la so lon nhat", b);
	}
	else if (c >=b && c >= a) {
		printf("%d la so lon nhat", c);
	}
}