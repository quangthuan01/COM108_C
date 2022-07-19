#include <stdio.h>

int main()
{
    char mang[] = "Lab07_Bai1"; // khai bao mot chuoi

    // printf("\n Vui long nhap vao mot chuoi: ");
    // scanf("mang[%c] = ", n);

    int i = 0;
    int vowels = 0;     // bien de dem so nguyen am
    int consonants = 0; // bien de dem so phu am

    while (mang[i] != '\0')
    {
        if (mang[i] == 'a' || mang[i] == 'e' || mang[i] == 'i' || mang[i] == 'o' || mang[i] == 'u'){
            vowels++;
        }else{
            consonants++;
        }

        i++;
    }

    printf("\n\nChuoi '%s' co chua: %d nguyen am va %d phu am.\n\n", mang, vowels, consonants);

    return 0;
}