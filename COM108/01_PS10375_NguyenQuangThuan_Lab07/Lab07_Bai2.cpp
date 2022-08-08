#include <stdio.h>
#include <string.h>
int main()
{

    char username[] = "admin";
    int password = 123;
    char user[20];
    int pass, result;

    printf("\n\nEnter username: ");
    gets(user);
    printf("\nEnter password: ");
    scanf("%d", &pass);

    /* Comparing the user input with the username. */
    result = strcmp(user, username);

    if (result == 0 && pass == password)
    {
        printf("\n\n Dang nhap thanh cong!\n\n");
    }
    else
    {
        printf("\n\nDang nhap that bai!\n\n");
    }

    return 0;
}