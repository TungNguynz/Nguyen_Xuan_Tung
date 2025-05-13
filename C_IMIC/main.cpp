#include<stdio.h>
class phan_so {
public:
	int mau_so;
	int tu_so;
	phan_so nhan_phan_so (phan_so khac);
	phan_so chia_phan_so(phan_so khac);
	phan_so cong_phan_so(phan_so khac);
	phan_so tru_phan_so(phan_so khac);
	int so_sanh(phan_so khac);
	phan_so rut_gon(phan_so khac);
};
phan_so phan_so::nhan_phan_so(phan_so khac){
	phan_so kq;
	kq.tu_so = khac.tu_so * tu_so;
	kq.mau_so = khac.mau_so * mau_so;
	return kq;
}
phan_so phan_so::chia_phan_so(phan_so khac) {
	phan_so kq;
	kq.tu_so = khac.tu_so * mau_so;
	kq.mau_so = khac.mau_so * tu_so;
	return kq;
}
phan_so phan_so::tru_phan_so(phan_so khac) {
	phan_so kq;
	kq.tu_so = tu_so * khac.mau_so - khac.tu_so * mau_so;
	kq.mau_so = mau_so * khac.mau_so;
	kq = kq.rut_gon(kq);
	return kq;
}
phan_so phan_so::cong_phan_so(phan_so khac) {
	phan_so kq;
	kq.tu_so = tu_so * khac.mau_so + khac.tu_so * mau_so;
	kq.mau_so = mau_so * khac.mau_so;
	kq = kq.rut_gon(kq);
	return kq;
}
int phan_so::so_sanh(phan_so khac) {
	int ve_trai = tu_so * khac.mau_so;
	int ve_phai = khac.tu_so * mau_so;
	if (ve_trai > ve_phai) return 1; // lon hon
	else if (ve_trai < ve_phai) return -1; // nho hon
	 else return 0; // bằng nhau
}
phan_so phan_so::rut_gon(phan_so khac) {
	int ucln = 0;
	for (int i = 1; i <= khac.tu_so || i <= khac.mau_so; i++) {
		if (khac.tu_so% i == 0 || khac.mau_so % i == 0) {
			ucln = i;
		}
	}
	khac.tu_so = khac.tu_so / ucln;
	khac.mau_so = khac.mau_so / ucln;
	return khac;
}
void main() {
	phan_so A;
	phan_so B;
	B.mau_so = 2;
	B.tu_so = 1;
	A.mau_so = 1;
	A.tu_so = 2;
	phan_so C = A.nhan_phan_so(B);
	if (A.so_sanh(B) == 1) {
		printf("A lon hon B");
	} else if (A.so_sanh(B) == -1) {
		printf("A nho hon B");
	} else if (A.so_sanh(B) == 0) {
		printf("A bang B");
	}

}