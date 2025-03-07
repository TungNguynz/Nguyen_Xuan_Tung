#include <stdio.h>
#include<math.h>

int main() {
	int a;
	printf("Hay nhap vao so nguyen a: ");
	scanf_s("%d", &a);
	if (a < 0) {
		printf("%d la so am", a);
	}
	else if (a > 0) {
		printf("%d la so duong", a);
	}
	else {
		printf("a la so 0");
	}
}