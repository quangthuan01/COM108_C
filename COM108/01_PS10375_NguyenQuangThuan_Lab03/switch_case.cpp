#include <stdio.h>
int main()
{
    // tháng ngày

    int month;

    do
    {
        printf("\n\nVui long nhap thang ban chon 1-12: ");
        scanf("%d", &month);

    } while (month < 0 || month > 12);

    switch (month)
    {
    case 1:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 1");
        printf("\n\n================================================\n\n");
        break;
    case 2:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 2");
        printf("\n\n================================================\n\n");
        break;
    case 3:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 3");
        printf("\n\n================================================\n\n");
        break;
    case 4:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 4");
        printf("\n\n================================================\n\n");
        break;
    case 5:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 5");
        printf("\n\n================================================\n\n");
        break;
    case 6:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 6");
        printf("\n\n================================================\n\n");
        break;
    case 7:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 7");
        printf("\n\n================================================\n\n");
        break;
    case 8:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 8");
        printf("\n\n================================================\n\n");
        break;
    case 9:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 9");
        printf("\n\n================================================\n\n");
        break;
    case 10:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 10");
        printf("\n\n================================================\n\n");
        break;
    case 11:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 11");
        printf("\n\n================================================\n\n");
        break;
    case 12:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang 12");
        printf("\n\n================================================\n\n");
        break;
    default:
        printf("\n\n================================================\n\n");
        printf("\tBan da chon thang null");
        printf("\n\n================================================\n\n");
        break;
    }

    return 0;
}