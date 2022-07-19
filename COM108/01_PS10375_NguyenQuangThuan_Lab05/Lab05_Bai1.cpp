#include <stdio.h>
/* CHUONG TRINH TIM SO LON NHAT */
int nhapSoNguyen();
int soLonNhat(int a, int b, int c);
int main(){
      int x, y, z, max;
      x=nhapSoNguyen();
      y=nhapSoNguyen();
      z=nhapSoNguyen();
      max=soLonNhat(x, y, z);
      printf("\n\nSo lon nhat la: %d\n\n", max);
      return 0;
}

int nhapSoNguyen(){
      int x;
      printf("\nNhap so nguyen: ");
      scanf("%d",&x);
      return x;
}
int soLonNhat(int a, int b, int c){
      int m = a;
      if(b>m)
            m=b;
      if(c>m)
            m=c;
      return m;
}