#include <stdio.h>
int main()
{
    // Bài 6
    // Chuc nang tinh lai ngan hang
    int tien, tienlai, tientra, thang = 1;
    printf("\n============================================================\n");
    printf("\n\nVui long nhap so tien muon vay: ");
    scanf("%d", &tien);
    int tientracodinh = tien;
    do
    {
        tienlai = 0.05 * tien;
        tientra = (tientracodinh / 12) + tienlai;
        tien -= (tientracodinh / 12);
        // xuất ra màn hình tiền lãi và tiền gốc hàng tháng phải trả
        printf("Thang %d phai tra %d bao gom: Tien lai: %d/Tien goc: %d", thang, tientra, tienlai, tientracodinh / 12);
        printf("\n============================================================\n");
   
        thang++;
    } while (thang != 13);
    return 0;
}