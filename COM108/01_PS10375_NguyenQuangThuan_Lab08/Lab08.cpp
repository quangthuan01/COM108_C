/**
 * @file Lab08.cpp
 * @author Nguyen Quang Thuan (github.com/quangthuan01/COM108_C)
 * @brief
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (thuannqit01@gmail.com) 2022
 *
 */

/**
 * @param SinhVien the array of students
 * @param n the number of students
 * @param mssv the number of students
 * @param fullName the full name of the students
 * @param nganhHoc the majors of students
 * @param diemTb the score of students
 */

#include <stdio.h>
#include <string.h>
// bảng sinh viên
struct SinhVien
{
    char mssv[50];
    char fullName[50];
    char nganhHoc[100];
    float diemToan;
    float diemVan;
    float diemEN;
};
// code

float GPA(float x /*diemToan*/, float y /*diemVan*/, float z /*diemEN*/)
{
    /* Calculation of the greatest common divisor. */
    float gpa = 0;

    if (x > 0 && y > 0 && z > 0)
    {

        gpa = (float)((x + y + z) / 3);
    }
    else
    {

        gpa = 0;
    }
    return gpa;
}
//  hàm nhập danh sách sinh viên
void inPut(SinhVien sinhVien[], int n)
{
    /* The above code is asking the user to input the information of the student. */
    for (int i = 0; i < n; i++)
    {
        printf("\n\nVui long nhap thong tin sinh vien thu: %d\n", i + 1);
        do
        {
            printf("\nVui long nhap MSSV: ");
            fflush(stdin); // xóa bộ đệm xuống dòng và khoảng trắng
            gets(sinhVien[i].mssv);

        } while (sinhVien[i].mssv == 0);

        /* Asking the user to input the full name of the student. */
        printf("Vui long nhap ten sinh vien: ");
        gets(sinhVien[i].fullName);
        fflush(stdin);

        /* Asking the user to input the major of the student. */
        printf("Vui long nhap nganh hoc: ");
        gets(sinhVien[i].nganhHoc);
        fflush(stdin);

        do
        {
            printf("Vui long nhap diem Toan: ");
            scanf("%f", &sinhVien[i].diemToan);
            fflush(stdin);
        } while (sinhVien[i].diemToan < 0 || sinhVien[i].diemToan > 10);
        /* Asking the user to input the score of the student. */

        /* Asking the user to input the score of the student. */
        do
        {
            printf("Vui long nhap diem Van: ");
            scanf("%f", &sinhVien[i].diemVan);
            fflush(stdin);
        } while (sinhVien[i].diemVan < 0 || sinhVien[i].diemVan > 10);

        /* Asking the user to input the score of the student. */
        do
        {
            printf("Vui long nhap diem English: ");
            scanf("%f", &sinhVien[i].diemEN);
            fflush(stdin);
        } while (sinhVien[i].diemEN < 0 || sinhVien[i].diemEN > 10);
    }
}
// hàm xuất danh sách sinh viên đã lưu
void outPut(SinhVien sinhVien[], int n)
{
    /* Printing out the information of the student. */
    printf("\n\nSinh vien da duoc them vao la:");
    printf("\n\tSTT \tMSSV \tTENSV \tNganhHoc \tDiemTOAN \tDiemVAN \tDiemEN \tDiemTB\n");

    for (int i = 0; i < n; i++)
    {
        // xuất thông tin sinh viên

        printf("\n\t%d \t%s \t%s \t%s \t%.1f \t%.1f \t%.1f \t%.1f\n",
               i + 1, sinhVien[i].mssv, sinhVien[i].fullName,
               sinhVien[i].nganhHoc, sinhVien[i].diemToan, sinhVien[i].diemVan, sinhVien[i].diemEN,
               GPA(sinhVien[i].diemToan, sinhVien[i].diemVan, sinhVien[i].diemEN));
    }
}
// hàm tìm kiếm sinh viên theo mã sinh viên
void searchStudent(SinhVien sinhVien[], int n)
{
    /* Asking the user to input the student ID that they want to search for. */
    char search[50];
    printf("\n\nVui long nhap MSSV ban muon tim: ");
    scanf("%s", &search);
    printf("\n\tSTT \tMSSV \tTENSV \tNganhHoc \tDiemTOAN \tDiemVAN \tDiemEN \tDiemTB\n");
    for (int i = 0; i < n; i++)
    {
        /* Comparing the student ID with the ID that the user inputted. */
        int result = strcmp(sinhVien[i].mssv, search);
        if (result == 0) // nếu mã số sinh viên = mã số đã nhập thì in ra màn hình
        {
            // in ra sinh vien da tìm kiếm
            printf("\n\t%d \t%s \t%s \t%s \t%.1f \t%.1f \t%.1f \t%.1f\n",
                   i + 1, sinhVien[i].mssv, sinhVien[i].fullName,
                   sinhVien[i].nganhHoc, sinhVien[i].diemToan, sinhVien[i].diemVan, sinhVien[i].diemEN,
                   GPA(sinhVien[i].diemToan, sinhVien[i].diemVan, sinhVien[i].diemEN));
        }
    }
}
// hàm đổi vị trí sinh viên
void ChangeStudent(SinhVien &x, SinhVien &y)
{
    /* Swapping the values of x and y. */
    SinhVien temp = x;
    x = y;
    y = temp;
}

// hàm sắp xếp vị trí sinh viên theo điểm trung bình
void changeStudent(SinhVien sinhVien[], int n)
{
    // sắp xếp sinh viên theo điểm trung bình
    /* Sorting the students by their average score. */
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (GPA(sinhVien[j].diemToan, sinhVien[j].diemVan, sinhVien[j].diemEN) > GPA(sinhVien[i].diemToan, sinhVien[i].diemVan, sinhVien[i].diemEN))
            {
                ChangeStudent(sinhVien[j], sinhVien[i]);
            }
        };
    };
    /* Printing out the information of the student. */
    printf("\n\nDanh sach sinh vien da duoc sap xep la:");
    printf("\n\tSTT \tMSSV \tTENSV \tNganhHoc \tDiemTOAN \tDiemVAN \tDiemEN \tDiemTB\n");
    for (int i = 0; i < n; i++)
    {
        // xuất thông tin sinh viên
        printf("\n\t%d \t%s \t%s \t%s \t%.1f \t%.1f \t%.1f \t%.1f\n",
               i + 1, sinhVien[i].mssv, sinhVien[i].fullName,
               sinhVien[i].nganhHoc, sinhVien[i].diemToan, sinhVien[i].diemVan, sinhVien[i].diemEN,
               GPA(sinhVien[i].diemToan, sinhVien[i].diemVan, sinhVien[i].diemEN));
    }
}
// main
int main()
{

    int n;

    printf("\n\n=======================================================\n\n");
    do
    {
        /* Asking the user to input the number of students. */
        printf("\nVui long nhap so luong sinh vien: ");
        scanf("%d", &n);
    } while (n < 1 || n > 50);

    SinhVien sinhVien[n];

    // nhập sinh vien
    /* Asking the user to input the information of the student. */
    inPut(sinhVien, n);
    // xuất sinh viên
    /* Printing out the information of the student. */
    outPut(sinhVien, n);
    // sắp xếp sinh viên đã nhập
    /* Sorting the students by their average score. */
    changeStudent(sinhVien, n);
    // tìm kiếm sinh viên
    /* Searching for the student with the ID that the user inputted. */
    searchStudent(sinhVien, n);
    printf("\n\n======================================================\n\n");
    return 0;
}