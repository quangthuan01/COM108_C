#include <stdio.h>

// bảng sinh viên
struct SinhVien
{
    char mssv[50];
    char fullName[50];
    char nganhHoc[100];
    float diemTb;
};
// hàm đổi vị trí sinh viên
void ChangeStudent(SinhVien &x, SinhVien &y)
{
    SinhVien temp = x;
    x = y;
    y = temp;
};
int main()
{
    int n;
    printf("\n\n=======================================================\n\n");
    printf("\nVui long nhap so luong sinh vien: ");
    scanf("%d", &n);
    fflush(stdin);
    SinhVien SV[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n\nVui long nhap thong tin sinh vien thu: %d\n", i + 1);
        printf("\nVui long nhap MSSV: ");
        gets(SV[i].mssv);
        fflush(stdin);
        printf("Vui long nhap Ho va Ten sinh vien: ");
        gets(SV[i].fullName);
        fflush(stdin);
        printf("Vui long nhap nganh hoc: ");
        gets(SV[i].nganhHoc);
        fflush(stdin);
        printf("Vui long nhap diem TB: ");
        scanf("%f", &SV[i].diemTb);
        fflush(stdin);
    }
    // bài 1 in ra màn hình
    printf("\n\nLab08_Bai1");
    for (int i = 0; i < n; i++)
    {
        // xuất thông tin sinh viên

        printf("\n\nSTT %d\n", i + 1);
        printf("\nMSSV: %s", SV[i].mssv);
        printf("\nFull Name: %s", SV[i].fullName);
        printf("\nNganh hoc: %s", SV[i].nganhHoc);
        printf("\nDiem TB: %.1f", SV[i].diemTb);
    }
    // sắp xếp sinh viên
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (SV[j].diemTb > SV[i].diemTb)
                ChangeStudent(SV[j], SV[i]);
        }
    }
    // bài 2 changeStudent
    printf("\n\n\nLab08_Bai2");
    for (int i = 0; i < n; i++)
    {
        // xuất thông tin sinh viên

        printf("\n\nSTT %d\n", i + 1);
        printf("\nMSSV: %s", SV[i].mssv);
        printf("\nFull Name: %s", SV[i].fullName);
        printf("\nNganh hoc: %s", SV[i].nganhHoc);
        printf("\nDiem TB: %.1f", SV[i].diemTb);
    }

    // bai 3 tìm kiếm sinh viên
    printf("\n\nLab08_Bai3 %d\n");
    char search[50];
    printf("\n\n Vui long nhap MSSV ban muon tim: ");
    scanf("%s", &search);
    for (int i = 0; i < n; i++)
    {
        if (search != SV[i].mssv)
        {
            printf("\n\nKhong co sinh vien ban muon tim trong danh sach");
            break;
        }
        else
        {
            printf("\n\nDuoi day la sinh vien ban muon tim: ");
            printf("\nMSSV: %s", SV[i].mssv);
            printf("\nFull Name: %s", SV[i].fullName);
            printf("\nNganh hoc: %s", SV[i].nganhHoc);
            printf("\nDiem TB: %.1f", SV[i].diemTb);
            break;
            
        }
    }

    printf("============================================");
    return 0;
}