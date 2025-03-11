#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int kWh;
    double tien_dien = 0; 
    printf("Nhap so KWh su dung: ");
    scanf("%d", &kWh);
    if (kWh >= 0 && kWh <= 50) {
        tien_dien = kWh * 1.678;
    }
    else if (kWh >= 51 && kWh <= 100) {
        tien_dien = 50 * 1.678 + (kWh - 50) * 1.734;
    }
    else if (kWh >= 101 && kWh <= 200) {
        tien_dien = 50 * 1.678 + 50 * 1.734 + (kWh - 100) * 2.014;
    }
    else if (kWh >= 201 && kWh <= 300) {
        tien_dien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kWh - 200) * 2.536;
    }
    else if (kWh >= 301 && kWh <= 400) {
        tien_dien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kWh - 300) * 2.834;
    }
    else if (kWh > 400) {
        tien_dien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kWh - 400) * 2.927;
    }

    printf("So tien phai tra cho %d KWh la: %.2f VND.\n", kWh, tien_dien);

    return 0;
}