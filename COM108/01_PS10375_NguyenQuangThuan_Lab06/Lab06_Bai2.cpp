#include <stdio.h>
#include <stdlib.h>

/* TIM SO LON NHAT TRONG MANG */
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
// Tim gia tri max
      int max = 0;

      for(i=0;i<n;i++){
            if(mang[i] > max){
                  max = mang[i];
            }
      }

      // Tim gia tri min
      int min = 0;
      for(i=0;i<n;i++){
            if(mang[i] < min){
                  min = mang[i];
            }
      }
      printf("\n\nGia tri lon nhat:  %d , nho nhat:  %d \n\n", max, min);
      return 0;
}