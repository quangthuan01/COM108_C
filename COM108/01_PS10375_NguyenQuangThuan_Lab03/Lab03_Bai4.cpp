#include <stdio.h>
#include <stdlib.h>
int main()
{
	// Bai 04 Menu
	// khai bao bien choose
	int choose;
	// thong tin menu
	printf("\n\n=========================================================\n");
	printf("\nMenu chuong trinh Lab 03\n\n");
	printf("\n\t1.Bai 1\n\n");
	printf("\n\t2.Bai 2.1\n\n");
	printf("\n\t3.Bai 2.2\n\n");
	printf("\n\t4.Bai 3\n\n");
	printf("\n\n===========================================================\n");

	do
	{
		printf("\nLua chon cua ban tu 1-4: ");
		// nhan gia tri tu man hinh
		scanf("%d", &choose);
	} while (choose < 1 || choose > 4);

	// switch case
	switch (choose)
	{

	case 1:
		printf("\n\nBai 1: If else\n\n");
		printf("\n\n=====================================\n\n");
		system("Lab03_Bai1.exe");
		break;
	case 2:
		printf("\n\nBai 2.1 Giai phuong trinh bac 1\n\n");
		printf("\n\n=====================================\n\n");
		system("Lab03_Bai2_1.exe");
		break;
	case 3:
		printf("\n\nBai 2.2 Giai phuong trinh bac 2\n\n");
		printf("\n\n=====================================\n\n");
		system("Lab03_Bai2_2.exe");
		break;
	case 4:
		printf("\n\nBai 3 Tinh tien dien\n\n");
		printf("\n\n=====================================\n\n");
		system("Lab03_Bai3.exe");
		break;
	default:
		printf("\n\n=======================================\n\n");
		printf("\n\nNhan tao` lao %d\n");
		printf("\n\n=====================================\n\n");
		break;
	};

	return 0;
}
