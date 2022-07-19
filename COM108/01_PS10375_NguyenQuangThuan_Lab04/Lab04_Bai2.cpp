#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d Khong phai so nguyen to\n\n", n);
        return 0;
    };
    
    int count = 0;

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        };
    };
    if(count == 0){
        printf("\n%d La so nguyen to\n\n", n);
    }else{
        printf("\n%d Khong phai so nguyen to\n\n", n);
    };
}