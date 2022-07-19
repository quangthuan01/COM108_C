#include <stdio.h>
#include <stdlib.h>
int main(){
// TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐTỰ NHIÊN CHIA HẾT CHO 2
// Nhap mang
      int i, n;
      printf("\n\nMoi nhap so gia tri muon tao: ");
      scanf("%d",&n);
      int mang[n];
      for(i=0;i<n;i++){
            printf("mang[%d] = ", i);
            scanf("%d",&mang[i]);
      }
// Tim trung binh cong
      float tong=0, trungBinh;
      int dem=0;
      for(i=0;i<n;i++){
            if(mang[i]%3==0){
                  tong+=mang[i];
                  dem++;
            }
      }
      trungBinh = tong/dem;
      printf("\n\nTrung binh tong cac so chia het cho 3 trong mang la:  %.1f\n\n", trungBinh);
      return 0;
}