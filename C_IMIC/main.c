#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[] = "Xin chao cac ban";  
    int n = 0;  
    int i = 0;
    int inword = 0;  
    while (str[i] != '\0') {
        if (str[i] != ' ' && inword==0) {  
            n++;  
            inword = 1;  
        }
        else if (str[i] == ' ') {
            inword = 0;  
        }
        i++;
    }
    printf("So tu trong chuoi là: %d\n", n);
}