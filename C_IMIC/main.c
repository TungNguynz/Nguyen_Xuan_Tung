#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h>
float fx(float x) {
	return x * x;
}
float gx(float x) {
	return 2 * x  * x +3 *x+1;
}
float tx(float x) {
	return sin(x) + 1;
}
typedef float (*contro)(float x);
float tinhtichphan(contro tro, int a, int b) {
	float h = (b - a) / 1000.0f;
	float s = 0;
	for (int i = 0; i < 1000; i++) {
		float db = tro(a + i * h);
		float dl = tro(a + (i + 1) * h);
		s += ((dl + db) * h / 2);
	}
	return s;
}
void main() {
	float a = tinhtichphan(fx, 1,2);
	printf("%f", a);
}