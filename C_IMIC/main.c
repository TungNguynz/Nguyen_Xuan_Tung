#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main() {
    int arr[] = { 1,2,2,4,4,3,1,3,2,4,1,3 };
    int so_luong_doi_tuong = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < so_luong_doi_tuong; i++) {
        int a = 0;
        if (arr[i]<=1) {}
        else {
            for (int n = 2; n <= sqrt(arr[i]); n++) {
                if (arr[i]%n == 0) {
                    a++;
                }
            }
            if (a == 0) {
                printf("%d", arr[i]);
            }
        }
    }
    
}
    