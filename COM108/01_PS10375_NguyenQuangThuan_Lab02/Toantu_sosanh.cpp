#include <stdio.h>
int main()
{

    int x, y;
    // Lớn hơn
    printf("\n\nNhap vao so a: ");
    scanf("%d", &x);
    printf("Nhap vao so b: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("\n\tLon hon: %d > %d = true!\n", x, y);
    }
    else
    {
        printf("\n\tLon hon: %d > %d = falsed!\n", x, y);
    };

    //   //Bé hơn

    if (x < y)
    {
        printf("\n\tBe hon: %d < %d = true!\n", x, y);
    }
    else
    {
        printf("\n\tBe hon: %d < %d = falsed!\n", x, y);
    };

    //     //Lớn hơn hoặc bằng
    if (x >= y)
    {
        printf("\n\tLon hon hoac bang: %d >= %d = true!\n", x, y);
    }
    else
    {
        printf("\n\tLon hon hoac bang: %d >= %d = falsed!\n", x, y);
    };

    //     //Bé hơn hoặc bằng

    if (x <= y)
    {
        printf("\n\tBe hon hoac bang: %d <= %d = true!\n", x, y);
    }
    else
    {
        printf("\n\tBe hon hoac bang: %d <= %d = falsed!\n", x, y);
    };

    //     //bằng

    if (x == y)
    {
        printf("\n\tBang: %d == %d = true!\n", x, y);
    }
    else
    {
        printf("\n\tBang: %d == %d = falsed!\n", x, y);
    };

    //     //khac

    if (x != y)
    {
        printf("\n\tKhac: %d != %d = true!\n\n", x, y);
    }
    else
    {
        printf("\n\tKhac: %d != %d = falsed!\n\n", x, y);
    };
    return 0;
}