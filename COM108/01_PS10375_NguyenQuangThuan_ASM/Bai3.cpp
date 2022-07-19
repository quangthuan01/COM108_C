#include <stdio.h>
#include <math.h>

// hàm kiểm tra thời gian chính xác
int checkTimeSuccess(float x, float y)
{
    if ((x >= 12 && x <= 23) && (y >= 0 && y <= 59))
        return 1;
    else
        return 0;
}
// main
int main()
{
    // Bài 3
    // Tính tiền quán karaoke
    // 3h đầu 150kVND
    // bắt đầu từ 4h  giảm 30%
    // h hoạt động của quán từ 12h - 23h
    // nếu vào từ khoảng 14 - 17 -> giảm tiếp 10%

    float startTime, endTime, startMinute, endMinute;
    int kt = 0;
    printf("\n\n==================================================================\n\n");
    printf("\nChao mung ban den voi quan karaoke FPT Polytechnic");
    printf("\nQuan chi phuc vu tu 12h -> 23h thoi nha!");
    do
    {
        printf("\n\nVui long nhap thoi gian bat dau\n");
        printf("\nVui long nhap gio: ");
        scanf("%f", &startTime);
        printf("Vui long nhap phut: ");
        scanf("%f", &startMinute);
        printf("\nVui long nhap thoi gian ket thuc");
        printf("\nVui long nhap gio: ");
        scanf("%f", &endTime);
        printf("Vui long nhap phut: ");
        scanf("%f", &endMinute);

        if (checkTimeSuccess(startTime, startMinute) && checkTimeSuccess(endTime, endMinute) && (endTime + (endMinute / 60)) - (startTime + (startMinute / 60)) >= 0)
            kt = 1;
        else
        {
            printf("\nGio ban nhap khong hop le!");
            printf("\nChu y quan chi phuc vu tu 12h -> 23h (030)!");
            printf("\nVui long nhap thoi gian chinh xac di nao!");
        }
    } while (kt != 1);
    // In ra màn hình thời gian hát karaoke
    printf("\n\nThoi gian ban vao:%.0fh%.0fp", startTime, startMinute);
    printf("\nThoi gian ket thuc:%.0fh%.0fp \n", endTime, endMinute);

    startTime += (startMinute / 60);
    endTime += (endMinute / 60);

    printf("\n%f", startTime);
    printf("\n%f", endTime);

    float time = endTime - startTime, totalMoney;
    if (time <= 3)
    {
        totalMoney = 150000 * time;
    }
    else
    {
        totalMoney = 150000 * 3 + (time - 3) * 0.7 * 150000;
    }
    if (startTime >= 14 && startTime <= 17)
    {
        totalMoney *= 0.9;
    }
    printf("\n\nTong so tien phai tra la:%.0f VND\n\n", totalMoney);
    printf("\n\n==================================================================\n\n");

    return 0;
}
