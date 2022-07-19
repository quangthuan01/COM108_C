#include <stdio.h>

// bảng sinh viên
struct SinhVien
{
    char fullName[50];
    float point;
};

// hàm đổi vị trí sinh viên
void ChangeStudent(SinhVien &x, SinhVien &y)
{
    SinhVien temp = x;
    x = y;
    y = temp;
}

// hàm sắp xếp học lực của sinh viên
void Sort(float point)
{
    if (point >= 9)
        printf("Xuat sac");
    else if (point < 9 && point > 8)
        printf("Gioi");
    else if (point < 8 && point >= 6.5)
        printf("Kha");
    else if (point < 6.5 && point >= 5)
        printf("Trung binh");
    else if (point < 5)
        printf("Yeu");
}
// main
int main()
{
    // Bài 8
    // Sap xep thong tin sinh vien
    int n;
    printf("\n\n=======================================================\n\n");
    printf("\nVui long nhap so luong sinh vien: \n");
    scanf("%d", &n);
    fflush(stdin);
    SinhVien SV[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n\nVui long nhap thong tin sinh vien thu %d \n\n", i + 1);
        printf("\nVui long nhap Ho va Ten sinh vien: ");
        gets(SV[i].fullName);
        fflush(stdin);
        printf("Nhap diem: ");
        scanf("%f", &SV[i].point);
        fflush(stdin);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (SV[j].point > SV[i].point)
                ChangeStudent(SV[j], SV[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nSV %d:", i + 1);
        printf("\nHo va Ten: %s", SV[i].fullName);
        printf("\npoint trung binh: %.1f", SV[i].point);
        printf("\nXep loai: ");
        Sort(SV[i].point);
        printf("\n\n=======================================================\n\n");

    }

    return 0;
}