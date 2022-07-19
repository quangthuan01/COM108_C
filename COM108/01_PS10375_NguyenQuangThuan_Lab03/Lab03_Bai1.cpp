#include <stdio.h>
int main()
{
	// khai bao bien
	float diem;

	// nhap tu ban phim
	//  kiem tra dieu kien cua diem 0-10
	do
	{
		printf("Vui long nhap diem cua ban: ");
		scanf("%f", &diem);
	} while (diem < 0 || diem > 10);

	if (diem >= 9)
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 01 If else\n");
		printf("\n\n\tBan co hoc luc xuat sac!\n\n");
		printf("\n<====================================>\n");
	}
	else if (diem >= 8)
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 01 If else\n");
		printf("\n\n\tBan co hoc luc gioi!\n\n");
		printf("\n<====================================>\n");
	}
	else if (diem >= 6.5)
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 01 If else\n");
		printf("\n\n\tBan co hoc luc kha!\n\n");
		printf("\n<====================================>\n");
	}
	else if (diem >= 5)
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 01 If else\n");
		printf("\n\n\tBan co hoc luc trung binh!\n\n");
		printf("\n<====================================>\n");
	}
	else if (diem >= 3.5)
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 01 If else\n");
		printf("\n\n\tBan co hoc luc yeu!\n\n");
		printf("\n<====================================>\n");
	}
	else if (diem >= 0)
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 01 If else\n");
		printf("\n\n\tBan co hoc luc kem!\n\n");
		printf("\n<====================================>\n");
	}
	else
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 01 If else\n");
		printf("\n\n\tNhap sai roi!!\n\n");
		printf("\n<====================================>\n");
	};

	return 0;
}
