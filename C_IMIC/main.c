#include <stdio.h>

void main() {
	int a, b;
	printf("Hay nhap gia tri cua a:");
	scanf_s("%d", &a);
	printf("Hay nhap gia tri cua b:");
	scanf_s("%d", &b);
	if (a < b) {
		printf("a nho hon b");
	}
	else {
		printf("a lon hon b");
	}
}