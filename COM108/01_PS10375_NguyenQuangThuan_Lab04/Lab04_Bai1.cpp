#include <stdio.h>
int main(){
// TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
// Nhap mang
      int i, n;
      printf("\n\nMoi nhap so gia tri muon tao: ");
      scanf("%d",&n);
      int mang[n];
      for(i=0;i<n;i++){
            printf("\nmang[%d] = ", i);
            scanf("%d",&mang[i]);
      }
// Tim trung binh cong
      float tong=0, trungBinh;
      int dem=0;
      for(i=0;i<n;i++){
            if(mang[i]%2==0){//trong mảng i các số chia hết cho 2
                  tong+=mang[i];//tong = tong+mang[i]
                  dem++;// tăng biến đếm lên 1
            }
      }
      trungBinh = tong/dem;
      printf("\n\nTrung binh tong cac so chia het cho 2 trong mang la:  %.1f\n\n", trungBinh);
      return 0;
}