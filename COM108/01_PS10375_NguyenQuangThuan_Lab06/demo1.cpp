#include <stdio.h>

int main(){
    /*Nhập mảng 2 chiều trong c*/
    int y,x;
    printf(">>Nhap do dai (so mang 1 chieu) trong mang 2 chieu: ");
    scanf("%d", &y);

    printf(">>Nhap do dai (so phan tu) trong mang 1 chieu: ");
    scanf("%d", &x);

    int array[y][x];
    printf(">>Nhap phan tu:\n");
    /*Sử dụng vòng lặp lồng để nhập mảng 2 chiều trong C*/
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) scanf("%d", &array[i][j]);
    }
    
    printf(">>Mang vua nhap:\n"); 
    /*Sử dụng vòng lặp lồng để xuất mảng 2 chiều trong C*/    
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) printf("%d ", array[i][j]);
        printf("\n");
    }
    return 0;
}
