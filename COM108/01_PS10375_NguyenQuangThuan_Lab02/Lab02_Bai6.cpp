#include <stdio.h>
int main()
{
    int day, month, year;
    printf("Vui long nhap ngay: ");
    scanf("%d", &day);
    printf("Vui long nhap thang: ");
    scanf("%d", &month);
    printf("Vui long nhap nam: ");
    scanf("%d", &year);

    printf("Ngay thang nam ban da nhap la: %d/%d/%d",day, month, year);

    return 0;
    

}