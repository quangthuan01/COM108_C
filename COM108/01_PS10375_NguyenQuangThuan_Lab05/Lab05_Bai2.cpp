#include <stdio.h>
#include <stdlib.h>
/* CHUONG TRINH KIEM TRA NAM NHUAN */
// Khai bao bien
int nam;
// Khai bao ham
int nhapSoNguyen();
int namNhuan();
int main(){
// Khai bao bien x de lay gia tri flag cua ham namNhuan()
      int x = namNhuan();
      if(x==0)
            printf("\n\nNam %d khong phai la nam nhuan\n\n", nam);
      else
            printf("\n\nNam %d la nam nhuan\n\n", nam);
      return 0;
}

// Ham tim nam nhuan
int namNhuan(){
      int flag=0;
      nam = nhapSoNguyen();
// Neu nam nhuan thi flag=1, khong phai thi flag=0;
      if(nam%400==0 || nam%4==0 && nam%100!=0)
            flag=1;
      return flag;
}

// Ham nhap vao so nam
int nhapSoNguyen(){
      int x;
      printf("\nNhap nam can kiem tra: ");
      scanf("%d",&x);
      return x;
}