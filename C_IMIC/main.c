#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int arr[] = { 1,-2,-2,4,4,-3,1,3,-2,-4,1,-3 };
    int so_luong_doi_tuong = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < so_luong_doi_tuong; i++) {
        if (arr[i]<0) {
             arr[i]=0;
        }
    }
    for (int i = 0; i < so_luong_doi_tuong; i++){
            printf("%d ", arr[i]);
         
    }
}
    