#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int sotien = 0, namchuc = 0, mottram = 0, haitram = 0, namtram = 0, tongATM = 0;
    do {
        printf("hay nhap so tien can rut: ");
        scanf("%d", &sotien);
    } while (sotien < 50000);
        while (tongATM < sotien) {
            if (sotien - tongATM >= 50000) {
                namchuc++;
                tongATM = namchuc * 50000 + mottram * 100000 + haitram * 200000 + namtram * 500000;

            }
            if (sotien - tongATM >= 100000) {
                mottram++;
                tongATM = namchuc * 50000 + mottram * 100000 + haitram * 200000 + namtram * 500000;

            }
            if (sotien - tongATM >= 200000) {
                haitram++;
                tongATM = namchuc * 50000 + mottram * 100000 + haitram * 200000 + namtram * 500000;

            }
            if (sotien - tongATM >= 500000) {
                namtram++;
                tongATM = namchuc * 50000 + mottram * 100000 + haitram * 200000 + namtram * 500000;

            }
        }
        

    printf(" co %d to 50, %d to 100, %d to 200, % d to 500", namchuc, mottram, haitram, namtram);
}
        