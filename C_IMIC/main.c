#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
struct phan_so {
	int tu;
	int mau;
};
struct phan_so nhan(struct phan_so a, struct phan_so b) {
	struct phan_so ketqua;
	ketqua.tu = a.tu * b.tu;
	ketqua.mau = a.mau * b.mau;
	return ketqua;
}
