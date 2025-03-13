#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n = 0, S=0;
    printf("hay nhap so nguyen n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            S = S + i;
        }
    }
    printf(" tong cua %d so nguyen chan la: %d", n, S);
}
    