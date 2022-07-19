#include<stdio.h>

struct phanso{
	int numerator;
	int denominator;
};
int main(){
//Bài 10
//Xay dung chuong trinh tinh toan phan so
	phanso x,y;
    printf("\n\n==================================================\n\n");
    printf("\nTinh toan phan so\n\n");
    printf("\nVui long nhap so thu 1: \n");
    printf("\nTu so: ");
    scanf("%d",&x.numerator);
    printf("Mau so: ");
    scanf("%d",&x.denominator);
    printf("\n\nVui long nhap so thu 2: \n");
    printf("\nTu so: ");
    scanf("%d",&y.numerator);
    printf("Mau so: ");
    scanf("%d",&y.denominator);
    //tính toán xuất ra màn hình các loại phép tính và kết quả
    printf("\nTong hai phan so: %d/%d + %d/%d = %d/%d \n", x.numerator,x.denominator,y.numerator,y.denominator,x.numerator*y.denominator+y.numerator*x.denominator,x.denominator*y.denominator);
    printf("\nHieu hai phan so: %d/%d - %d/%d = %d/%d\n", x.numerator,x.denominator,y.numerator,y.denominator,x.numerator*y.denominator-y.numerator*x.denominator,x.denominator*y.denominator);
    printf("\nTich hai phan so: %d/%d * %d/%d = %d/%d\n", x.numerator,x.denominator,y.numerator,y.denominator,x.numerator*y.numerator,x.denominator*y.denominator);
    printf("\nThuong hai phan so: %d/%d : %d/%d = %d/%d\n", x.numerator,x.denominator,y.numerator,y.denominator,x.numerator*y.denominator,x.denominator*y.numerator);
    printf("\n\n==================================================\n\n");

return 0;
}