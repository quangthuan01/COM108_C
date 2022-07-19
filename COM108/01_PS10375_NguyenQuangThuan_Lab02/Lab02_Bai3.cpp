// khai bao
#include <stdio.h>
#define PI 3.14
int main(){
//Create variables
//Bai3 chu vi hinh tron
//khai bao bien ban kinh duong tron
float r;

printf("Vui long nhap ban kinh duong tron: ");
scanf("%f", &r);

//khai bao chuVi, dienTich
float chuVi, dienTich;
//Cong thuc tinh chhu vi duong tron
chuVi = 2*PI*r;
dienTich = PI*r*r;
//xuat ra man hinh 
printf("<===========================================>");

printf("\n\n\tBai 03: Tinh chu vi va dien tich hinh tron\n\n");

printf("\tHinh tron co Chu vi:  %.1f\n\n", chuVi);
printf("\tHinh tron co Dien tich:  %.1f\n\n", dienTich);

printf("<===========================================>");
return 0;
}
