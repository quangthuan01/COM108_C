#include<stdio.h>
#include<conio.h>

int main(){

    int a, b, temp;

        printf("\n\nVui long nhap so a: ");
        scanf("%d", &a);
        printf("\nVui long nhap so b:  ");
        scanf("%d", &b);
        
        temp = a;
        a = b;
        b = temp;

        printf("\n\n Swap a = %d, b = %d\n\n", a, b);

        return 0;
}