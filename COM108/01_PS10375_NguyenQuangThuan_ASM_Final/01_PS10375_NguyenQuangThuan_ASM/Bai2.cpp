#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    // Bài 2
    // Tìm bội chung nhỏ nhất và ước chung lớn nhất

    // UCLN và BCNT
  /* Declaring the variables. */
    int number1, number2, UCLN, BCNT;
  /* Asking the user to input two numbers. */
    printf("\n\nVui long nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("\n\nVui long nhap so thu hai: ");
    scanf("%d", &number2);
    // sự dụng hàm trong C/C++
    /* Using the built-in function `__gcd` to find the greatest common divisor of `number1` and
    `number2`. */
    UCLN = __gcd(number1, number2);
    // Bội chung nhỏ nhất
    /* Calculating the least common multiple of `number1` and `number2`. */
    BCNT = (number1 * number2) / UCLN;
    // in ra màn hình
    /* Printing the result to the screen. */
    printf("\n\n==========================================\n\n");
    printf("\n=> %d La uoc chung lon nhat cua hai so %d, %d\n\n", UCLN, number1, number2);
    printf("\n=> %d La boi chung nho nhat cua hai so %d, %d\n\n", BCNT, number1, number2);
    printf("\n\n==========================================\n\n");

    return 0;
}