#include <stdio.h>
// bảng sinh viên
struct SinhVien
{
    int mssv;
    char fullName[50];
    char nganhHoc[100];
    float diemTb;
};
//code
// hàm nhập danh sách sinh viên
void inPut(SinhVien sinhVien[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\nVui long nhap thong tin sinh vien thu: %d\n", i + 1);
        printf("\nVui long nhap MSSV: ");
        scanf("%d", &sinhVien[i].mssv);
        fflush(stdin);
        printf("Vui long nhap ten sinh vien: ");
        gets(sinhVien[i].fullName);
        fflush(stdin);
        printf("Vui long nhap nganh hoc: ");
        gets(sinhVien[i].nganhHoc);
        fflush(stdin);
        printf("Vui long nhap diem TB: ");
        scanf("%f", &sinhVien[i].diemTb);
    }
}
// hàm xuất danh sách sinh viên đã lưu
void outPut(SinhVien sinhVien[], int n)
{
    printf("\n\nSinh vien da duoc them vao la:");
    printf("\n\tSTT \tMSSV \tTENSV \tNganhHoc \tDiemTB\n");
    for (int i = 0; i < n; i++)
    {
        // xuất thông tin sinh viên

        printf("\n\t%d \t%d \t%s \t%s \t%.1f\n",
               i + 1, sinhVien[i].mssv, sinhVien[i].fullName,
               sinhVien[i].nganhHoc, sinhVien[i].diemTb);
    }
}
// hàm tìm kiếm sinh viên theo mã sinh viên
void searchStudent(SinhVien sinhVien[], int n)
{
    int search;
    printf("\n\nVui long nhap MSSV ban muon tim: ");
    scanf("%d", &search);
    printf("\n\tSTT \tMSSV \tTENSV \tNganhHoc \tDiemTB\n");
    for (int i = 0; i < n; i++)
    {
        if (sinhVien[i].mssv == search) // nếu mã số sinh viên = mã số đã nhập thì in ra màn hình
        {
            // tìm kiếm sinh viên
            printf("\n\t%d \t%d \t%s \t%s \t%.1f\n",
                   i + 1, sinhVien[i].mssv, sinhVien[i].fullName,
                   sinhVien[i].nganhHoc, sinhVien[i].diemTb);
        }
    }
}
// hàm đổi vị trí sinh viên
void ChangeStudent(SinhVien &x, SinhVien &y)
{
    SinhVien temp = x;
    x = y;
    y = temp;
};
// hàm sắp xếp vị trí sinh viên theo điểm trung bình
void changeStudent(SinhVien sinhVien[], int n)
{
    // sắp xếp sinh viên theo điểm trung bình
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sinhVien[j].diemTb > sinhVien[i].diemTb)
                ChangeStudent(sinhVien[j], sinhVien[i]);
        }
    }
    printf("\n\nDanh sach sinh vien da duoc sap xep la:");
    printf("\n\tSTT \tMSSV \tTENSV \tNganhHoc \tDiemTB\n");
    for (int i = 0; i < n; i++)
    {
        // xuất thông tin sinh viên
        printf("\n\t%d \t%d \t%s \t%s \t%.1f\n",
               i + 1, sinhVien[i].mssv, sinhVien[i].fullName,
               sinhVien[i].nganhHoc, sinhVien[i].diemTb);
    }
}
// main
int main()
{
    SinhVien sinhVien[10];
    int n;
    printf("\n\n=======================================================\n\n");
    do
    {
        printf("\nVui long nhap so luong sinh vien: ");
        scanf("%d", &n);
    } while (n < 1 || n > 50);

    // nhập sinh vien
    inPut(sinhVien, n);
    // xuất sinh viên
    outPut(sinhVien, n);
    // sắp xếp sinh viên đã nhập
    changeStudent(sinhVien, n);
    // tìm kiếm sinh viên
    searchStudent(sinhVien, n);
    printf("\n\n======================================================\n\n");
    return 0;
}