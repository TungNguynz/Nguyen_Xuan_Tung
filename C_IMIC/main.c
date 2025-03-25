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
char* Tim_Chuoi(char* str, char* subStr)
{
	int chieu_dai_str = sophantu(str);
	int chieu_dai_subStr = sophantu(subStr);
	for (int i = 0; i < chieu_dai_str; i++)
	{
		int j = 0;
		for (; j < chieu_dai_subStr; j++)
		{
			if (str[i + j] != subStr[j])
				break;
		}
		if (j == chieu_dai_subStr)
			return str + i;
	}
	return 0;
}
int main() {
	char* str = "hellcco";
	char c = 'c';
	char subStr[] = "he";
	char* n = timc(str, c);
	char* vi_tri = Tim_Chuoi(str, subStr);
	printf("%p\n", n);
	printf("%p", vi_tri);
}