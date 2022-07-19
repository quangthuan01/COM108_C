#include<stdio.h>
int main(){

    char username[] = "admin";
    int password = 123;
    char user[20];
    int pass;

    printf("\n\nEnter username: ");
    gets(user);
    printf("\nEnter password: ");
    scanf("%d",&pass);


    if(user == username || pass == password){
        printf("\n\n Dang nhap thanh cong!\n\n");
    }else{
        printf("\n\nDang nhap that bai!\n\n");
    }

    return 0;
}