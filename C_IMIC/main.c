#include <stdio.h>

void main() {
	int buoc = 0, i =0, mat_khau = 1234, mat_khau_user, so_tien_rut=0;
	switch (buoc) {
	case 0:
		while (i < 3) {
			printf("Hay nhap mat khau cua ban:");
			scanf_s("%d", &mat_khau_user);
			if (mat_khau_user != mat_khau) {
				i++;
			}
			else {
				buoc++;
				i = 4;
			}
		}
	    case 1:
			while (buoc == 1) {
				printf("hay nhap so tien can rut: ");
				scanf_s("%d", &so_tien_rut);
				if (so_tien_rut < 10000) {
					printf("so tien can rut la: %d VND", so_tien_rut);
					buoc++;
	
				}
			}
			break;
	}
}


