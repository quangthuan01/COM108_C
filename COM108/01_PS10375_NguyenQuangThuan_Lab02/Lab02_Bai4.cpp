// khai bao
#include <stdio.h>
int main(){
//Create variables
//Bai4 Tinh diem trung binh
// khai bao bien toan, ly, hoa
float toan, ly, hoa;

printf("Vui long nhap diem mon toan: ");
scanf("%f", &toan);

printf("Vui long nhap diem mon ly: ");
scanf("%f", &ly);

printf("Vui long nhap diem mon hoa: ");
scanf("%f", &hoa);

//khai bao diemTb
/*
      He so cua toan x3
      He so cua ly x2
      He so cua Hoa x1
*/
float diemTb;
diemTb=(toan*3+ ly*2+hoa)/6;
//xuat ra man hinh 
printf("<===========================================>");

printf("\n\n\tBai 04: Tinh diem trung binh\n\n");

printf("\tDiem trung binh:  %.1f\n\n", diemTb);

printf("<===========================================>");
return 0;
}
