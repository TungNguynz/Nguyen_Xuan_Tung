#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
typedef struct {
    int tu;   
    int mau; 
}phan_so;
phan_so rut_gon(phan_so a) {
    int ucln = 1;
    for (int i = 1;i<=a.tu && i<= a.mau; i++) {
        if (a.tu % i == 0 && a.mau % i == 0) {
            ucln = i; 
        }
    }
    a.tu = a.tu / ucln;
    a.mau = a.mau / ucln;
    return  a;
}
 phan_so cong(phan_so a, phan_so b) {
    phan_so ketqua;
    ketqua.tu = a.tu * b.mau + b.tu * a.mau;  
    ketqua.mau = a.mau * b.mau;                
    ketqua = rut_gon(ketqua);
    return ketqua;
}
 phan_so tru(phan_so a,phan_so b) {
    phan_so ketqua;
    ketqua.tu = a.tu * b.mau - b.tu * a.mau;  
    ketqua.mau = a.mau * b.mau;                
    ketqua = rut_gon(ketqua);
    return ketqua;
}
 phan_so chia(phan_so a, phan_so b) {
    phan_so ketqua;
    ketqua.tu = a.tu * b.mau;       
    ketqua.mau = a.mau * b.tu;      
    ketqua = rut_gon(ketqua);
    return ketqua;
}
