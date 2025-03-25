#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
typedef struct {
	char*ten;
	int tuoi;
	float toan;
	float van;
	float tb;
	int xep_loai;
}hoc_sinh;
float tb(float a, float b) {
	int kq = (a + b) / 2;
	return kq;
}
void main() {
	hoc_sinh hoc_sinh[] = {
		{.ten = "Nguyen Van A", .tuoi = 18, .toan = 7.5, .van = 6.0},
		{.ten = "Nguyen Van B", .tuoi = 18, .toan = 7.5, .van = 6.0},
		{.ten = "Nguyen Van C", .tuoi = 18, .toan = 7.5, .van = 6.0},
		{.ten = "Nguyen Van D", .tuoi = 18, .toan = 7.5, .van = 6.0},
	};
	int n = sizeof(hoc_sinh) / sizeof(hoc_sinh[0]);
	for (int i = 0; i < n; i++) {
		hoc_sinh[i].tb = tb(hoc_sinh[i].toan, hoc_sinh[i].van)
	}
}