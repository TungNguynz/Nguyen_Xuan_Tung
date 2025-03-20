#include "toan.h"

int cong(int x, int y) {
	int ketqua = 0;
		ketqua = x + y;
		return ketqua;
}
int nhan(int x, int y) {
	int ketqua = 0;
	for (int i = 0; i < y; i++) {
		ketqua = cong(ketqua, x);
	}
	return ketqua;
}