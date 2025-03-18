#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[] = "nguyen van a"; 
    int i = 0;
    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;  
            }
        }
        i++;
    }
    printf("Chuoi sau khi in hoa chu cai đau moi tu: %s\n", str);
}