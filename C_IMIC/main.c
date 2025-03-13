#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int array_1[10] = { 0 };
    int s = 0;
    printf("hay nhap lan luot cac gia tri tu ban phim: ");
    for (int i = 0; i <= 9; i++) {
        scanf("%d", &array_1[i]);
    }
    for (int i = 0; i <= 9; i++) {
        s = s + array_1[i];
    }
    printf("tong cac gia tri trong mang la %d", s);
}
    