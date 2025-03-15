#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int array_1[10] = { 0 };
    int s = 0, a=0;
    float n = 0;
    printf("hay nhap lan luot cac gia tri tu ban phim: ");
    for (int i = 0; i <= 9; i++) {
        scanf("%d", &array_1[i]);
    }
    for (int i = 0; i <= 9; i++) {
        if (array_1[i] % 2 != 0) {
            s = s + array_1[i];
            a++;
        }
    }
    n = (float)s / a;
    printf("gia tri trung binh cac phan tu le trong mang la %.2f", n);
}
    