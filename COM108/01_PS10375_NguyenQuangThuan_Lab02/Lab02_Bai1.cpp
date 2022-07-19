// khai bao
#include <stdio.h>
int main()
{
    /**Create variables
     * int myNum = 5;             // Integer (whole number)
     * float myFloatNum = 5.99;   // Floating point number
     * char myLetter = 'D';       // Character
     * // Print variables
     * printf("%d\n", myNum);
     * printf("%f\n", myFloatNum);
     * printf("%c\n", myLetter);
     */
    // Bai1 tong hieu

    int number, number1, tong, hieu;

    printf("Vui long nhap so thu nhat: ");
    scanf("%d", &number);
    printf("Vui long nhap so thu hai: ");
    scanf("%d", &number1);

    tong = number + number1;
    hieu = number - number1;

    // xuat ra man hinh
    printf("<===========================================>");

    printf("\n\n\tBai 01: Tinh tong hieu 2 so\n\n");

    printf("\n\t Tong: %d\n", tong);
    printf("\n\t Hieu: %d\n\n", hieu);

    printf("<===========================================>");



    return 0;
}
