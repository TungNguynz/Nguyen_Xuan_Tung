#include <stdio.h>

void main() {
	int a;
	printf("Hay nhap diem cua ban:");
	scanf_s("%d", &a);
	if (8.0 > a >= 6.5) {
		printf("ban la hoc sinh kha");
	}
	else if (6.5>a>=5,0){
		printf("ban la hoc sinh trung binh");
	}
	else if (5.0 > a){
		printf("ban la hoc sinh yeu");
		}
	else {
		printf("ban la hoc sinh gioi");

	}
}