#include <stdio.h>
#include<math.h>

int main() {
	float a, b, c, delta, x1, x2, x;
	printf("Hay nhap he so a,b,c:\n ");
	scanf_s("%f %f %f", &a,&b,&c);
	delta = (b * b) - (4 * a * c);

	if (delta>0) {
		x1 = (b * (-1) + sqrt(delta)) / (2 * a);
		x2 = (b * (-1) - sqrt(delta)) / (2 * a);
		printf("Phuong trinh co hai nghiem phan biet x1 va x2 lan luot la: %.2f va %.2f ", x1, x2);
	}else if (delta==0) {
		x = (b * (-1)) / (2 * a);
		printf("phuonh trinh co ngiem duy nhat la x = %.2f", x);
	}
	else {
		printf("phuong trinh vo nghiem");
	}
}