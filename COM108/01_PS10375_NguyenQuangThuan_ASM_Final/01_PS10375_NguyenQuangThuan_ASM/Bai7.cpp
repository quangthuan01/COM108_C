#include <stdio.h>
int main()
{
    // Bài 7
    // Chuong trinh vay tien mua xe may

    int thang = 1, kt = 0;
    float phantramvay, tientradau, tiencon, tienmoithang, tienlai = 0;
    printf("\n\nVui long nhap phan tram vay toi da:");
    scanf("%f", &phantramvay);
    tientradau = ((100 - phantramvay) / 100) * 500000000;
    tiencon = 500000000 - tientradau;
    printf("%f", tiencon);
    tienmoithang = tiencon / 288;
    do
    {

        tiencon -= tienmoithang;
        printf("\n=============================================================\n");
        printf("\nThang %d phai tra %.2f bao gom: Tien lai:%.2f/Tien goc:%.2f", thang, tienlai + tienmoithang, tienlai, tienmoithang);
        printf("\n=============================================================\n\n");

        if (thang % 12 == 0)
            tienlai = (tiencon * 0.072) / 12;
        thang++;
    } while (thang != 24 * 12 + 1);

    return 0;
}