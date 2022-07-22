#include <stdio.h>
int main()
{
      // TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
      // Nhap mang
      /*   int i, n;
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
         printf("\n\nTrung binh tong cac so chia het cho 2 trong mang la:  %.1f\n\n", trungBinh);*/

      float min, max, counter = 0, total = 0, trungBinhTong;

      printf("\n\n Vui long nhap gia tri nho nhat: ");
      scanf("%f", &min);
      printf("\n\n Vui long nhap gia tri lon nhat: ");
      scanf("%f", &max);
      // nếu min> max thì đổi min = max , max = min;
      if (min > max)
      {
            int step;
            step = min;
            min = max;
            max = step;
      };
      // tìm trong khoảng từ min - max có bao nhiêu số chia hết cho 2
      for (int i = min; i <= max; i++)
      {
            if (i % 2 == 0)
            {
                  total = total + i; // hoặc total+=i; nếu có thì cộng nó vào total
                  counter++;// nếu có thì tăng giá trị lên 1
            }
      };

      trungBinhTong = total / counter;
      printf("\n\n===============================================================================\n\n");
      printf("\n\nTrung binh tong cac so chia het cho 2 trong khoang %.0f - %.0f la: %.0f", min, max, trungBinhTong);
      printf("\n\n===============================================================================\n\n");

      return 0;
}