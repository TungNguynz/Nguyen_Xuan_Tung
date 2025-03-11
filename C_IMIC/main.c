#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int mk = 1234, mkuser=0, i=0;
    do {
        printf("hay nhap mat khau: ");
        scanf("%d", &mkuser);
        if (mk != mkuser) {
            i++;
            if (i == 3) {
                break;
            }
        }
    } while (mk != mkuser);
}