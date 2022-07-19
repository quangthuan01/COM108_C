#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Bài 9
    // Xay dung game FPOLY-LOTT

    srand((unsigned int)time(NULL));
    int x, y, x1, y1;

    printf("\n\n==========================================\n\n");
    printf("Chao mung ban den voi Game FPOLY-LOTT\n\n");
    printf("Vui long nhap hai so tu 1-15");
    printf("\nVui long nhap so thu 1:");
    scanf("%d", &x);
    printf("Vui long nhap so thu 2:");
    scanf("%d", &y);
    
    // gán điều kiện random
    int min = 1;
    int max = 15;

    // random number1, number2
    x1 = rand() % (max - min + 1) + min;
    y1 = rand() % (max - min + 1) + min;

    // xuất ra màn hình number1, number2
    printf("\n\nSo thu 1: %d , So thu 2: %d \n\n", x1, y1);

    //kiểm tra điều kiện 
    if ((x1 == x || x1 == y) && (y1 == x || y1 == y))
    {
        printf("\nChuc mung ban trung giai nhat");
    }
    else if ((x1 == x || x1 == y) || (y1 == x || y1 == y))
    {
        printf("\nChuc mung ban trung giai hai");
    }
    else
    {
        printf("\nChuc ban may man lan sau");
    }
    printf("\n\n==========================================\n\n");

    return 0;
}