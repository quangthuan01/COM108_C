// khai bao
#include <stdio.h>
int main(){
//Create variables
//Bai2 chu vi, dien tich hinh chu nhat
float dai, rong;

printf("Vui long nhap chieu dai: ");
scanf("%f", &dai);
printf("Vui long nhap chieu rong: ");
scanf("%f", &rong);

//khai bao chuVi, dienTich
float chuVi, dienTich;
//Cong thuc tinh chhu vi duong tron
chuVi = (dai+rong)*2;
dienTich = dai*rong;
//xuat ra man hinh 
printf("<===========================================>");

printf("\n\n\tBai 02: Tinh chu vi va dien tich hinh chu nhat\n\n");

printf("\tHinh chu nhat co Chu vi:  %.1f\n\n", chuVi);
printf("\tHinh chu nhat co Dien tich:  %.1f\n\n", dienTich);

printf("<===========================================>");
return 0;
}
