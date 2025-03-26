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
	float kq = (a + b) / 2;
	return kq;
}
void main() {
	hoc_sinh hoc_sinh[] = {
		{.ten = "Nguyen Van A", .tuoi = 18, .toan = 7.5, .van = 6.0},
		{.ten = "Nguyen Van B", .tuoi = 18, .toan = 8.8, .van = 8.0},
		{.ten = "Nguyen Van C", .tuoi = 18, .toan = 5.6, .van = 7.2},
		{.ten = "Nguyen Van D", .tuoi = 18, .toan = 9.0, .van = 7.9},
	};
	int n = sizeof(hoc_sinh) / sizeof(hoc_sinh[0]);
	for (int i = 0; i < n; i++) {
		hoc_sinh[i].tb = tb(hoc_sinh[i].toan, hoc_sinh[i].van);
		if (hoc_sinh[i].tb >= 8.0) {
			printf("hoc sinh %s xep loai gioi\n", hoc_sinh[i].ten);
		}
		else if (hoc_sinh[i].tb >= 6.5&&hoc_sinh[i].tb<8.0) {
			printf("hoc sinh %s xep loai kha\n", hoc_sinh[i].ten);
		}
		else if(hoc_sinh[i].tb >= 5 && hoc_sinh[i].tb < 6.5){

			printf("hoc sinh %s xep loai trung binh\n", hoc_sinh[i].ten);
		}
		else {
			printf("hoc sinh %s xep loai yeu\n", hoc_sinh[i].ten);
		}
	}
	
}