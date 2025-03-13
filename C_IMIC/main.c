#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n = 0, a=0;
    float b = 0, S = 0;
    printf("hay nhap so tien gui: ");
    scanf("%d", &a);
    printf("hay nhap so nam: ");
    scanf("%d", &n); 
    printf("hay nhap phan tram lai: ");
    scanf("%f", &b);
    S = a;
    for (int i = 1; i <= n; i++) {
        
            S = S + S*b;
    }
    printf( "tong so tien sau % d nam la : % f", n, S);
}
    