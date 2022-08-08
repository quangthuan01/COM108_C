#include <stdio.h>

/* TINH BINH PHUONG CAC PHAN TU TRONG MANG */
unsigned int SumQ(int a[],int n);
int main() {
// Nhap mang
      int i, n;
      printf("\n\nMoi nhap so gia tri muon tao: ");
      scanf("%d",&n);
      int mang[n];
      for(i=0;i<n;i++){
            printf("mang[%d] = ", i);
            scanf("%d",&mang[i]);
      }
        SumQ(mang,n);

      printf("\n\nTong binh phuong cac phan tu trong mang:  %d \n\n",SumQ(mang,n));
      return 0;
}
unsigned int SumQ(int a[],int n)
{
   unsigned int temp = 0;
   for(int i=0;i<n;i++)
      temp+=a[i]*a[i];
   return temp;
}