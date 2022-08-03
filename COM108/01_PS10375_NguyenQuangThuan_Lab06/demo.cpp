#include <stdio.h>
int main(){
    int bangdiem[][3] = {
        {7, 9, 8} ,    
        {8, 6, 7} ,     
        {5, 7, 6} ,    
        {4, 9, 5} ,    
        {5, 8, 7} ,    
        {6, 9, 3}
    } ;
    //Lấy giá trị phần tử
    printf("Phan tu [1][2]: %d\n", bangdiem[1][2]);
    printf("Phan tu [3][2]: %d\n", bangdiem[3][2]);

    //Thay đổi giá trị phần tử
    bangdiem[3][2] = 10;
    printf("Phan tu [3][2]: %d\n", bangdiem[3][2]);
    return 0;
}
