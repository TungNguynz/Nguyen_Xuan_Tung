﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n = 0, S=0;
    printf("hay nhap so nguyen n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        S = S + i;
    }
    printf(" tong cua %d so nguyen la: %d", n, S);
}
    