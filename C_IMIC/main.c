#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, temp=0;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap số nguyen b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Sau khi hoan vi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}    