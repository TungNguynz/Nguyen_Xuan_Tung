#include <stdio.h>
#include<math.h>

int main() {
	int a;
	printf("Hay nhap vao so nguyen a: ");
	scanf_s("%d", &a);
	if (a %2 == 0) {
		printf("%d la so chan", a);
	}
	else if (a%2 != 0) {
		printf("%d la so le", a);
	}
	
}