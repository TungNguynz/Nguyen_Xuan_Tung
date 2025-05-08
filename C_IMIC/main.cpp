class phan_so {
public:
	int mau_so;
	int tu_so;
	phan_so nhan_phan_so (phan_so khac);
	phan_so chia_phan_so(phan_so khac);
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
void main() {
	phan_so A;
	phan_so B;
	B.mau_so = 2;
	B.tu_so = 1;
	A.mau_so = 2;
	A.tu_so = 1;
	phan_so C = A.nhan_phan_so(B);
	

}