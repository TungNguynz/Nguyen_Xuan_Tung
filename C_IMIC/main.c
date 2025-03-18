#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[] = "Hello";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';  
        }
    }
    printf(" IN HOA: %s\n", str);
}