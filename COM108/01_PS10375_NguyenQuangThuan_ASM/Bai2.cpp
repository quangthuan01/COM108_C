#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    // Bài 2
    // Tìm bội chung nhỏ nhất và ước chung lớn nhất

    // UCLN và BCNT
    int number1, number2, UCLN, BCNT, result;
    printf("\n\nVui long nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("\n\nVui long nhap so thu hai: ");
    scanf("%d", &number2);
    // sự dụng hàm trong C/C++
    UCLN = __gcd(number1, number2);
    // Bội chung nhỏ nhất
    BCNT = (number1 * number2) / UCLN;
    // in ra màn hình
    printf("\n\n==========================================\n\n");
    printf("\n=> %d La uoc chung lon nhat cua hai so %d, %d\n\n", UCLN, number1, number2);
    printf("\n=> %d La boi chung nho nhat cua hai so %d, %d\n\n", BCNT, number1, number2);
    printf("\n\n==========================================\n\n");

    return 0;
}