#include <stdio.h>
#include <string.h>
int main()
{
// XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI
//nhap 5 chuoi bat kì

    char s[4][20];
    char t[20];
    int i, j;
    int size = 5;

    printf("\nVui long nhap 5 chuoi bat ky: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%s", s[i]);
    }
    // sap xep chuoi
    for (i = 1; i < size; i++)
    {
       /* Sorting the strings in alphabetical order. */
        for (j = 1; j < size; j++)
        {
           /* Sorting the strings in alphabetical order. */
            if (strcmp(s[j - 1], s[j]) > 0)
            {
                /* Copying the string from `s[j-1]` to `t`. */
                strcpy(t, s[j - 1]);
                /* Copying the string from `s[j]` to `s[j-1]`. */
                strcpy(s[j - 1], s[j]);
                /* Copying the string from `t` to `s[j]`. */
                strcpy(s[j], t);
            }
        }
    }

   /* Printing the sorted array. */
    printf("\nSap xep thu tu cua cac chuoi:");
    for (i = 0; i < size; i++)
    {
        printf("\n%s", s[i]);
    }
    return (0);
}