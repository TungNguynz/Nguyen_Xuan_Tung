#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[] = { 1,2,2,4,4,3,1,3,2,4,1,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Mang sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}