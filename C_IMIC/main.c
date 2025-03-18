#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[] = "Hello ";
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            n++;
        }
    }
    printf("So dau space trong chuoi là: %d\n", n);
}