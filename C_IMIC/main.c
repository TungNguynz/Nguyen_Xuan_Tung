#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    for (int a = 2; a <= 10; a++) {
        for (int b = 2; b <= 9; b++) {
                printf("%d * %d= %d\t", a, b, a*b);


            }
            printf("\n");
    }
}