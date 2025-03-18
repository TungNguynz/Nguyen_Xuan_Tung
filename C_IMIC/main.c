#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[] = "Hello";
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }
    printf("So ky tu trong chuoi là: %d\n", n);
}