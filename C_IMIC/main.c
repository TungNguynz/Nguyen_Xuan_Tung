#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Xây dựng hàm. dùng để tìm ký tự c trong chuỗi str. hàm trả về địa chỉ của ký tự c trong chuỗi str
int sophantu(char* str) {
	int n = 0;
	while (*str != 0) {
		str++;
		n++;
	}
	return n;
}
char* timc(char* str, char c) {
	int n = sophantu(str);
	for (int i = 0; i < n; i++) {
		if (str[i] == c) {
			return str + i;
		}
	}
	return 0;

}
int main() {
	char* str = "hellcco";
	char c = 'c';
	char* n = timc(str, c);
	printf("%p", n);
}