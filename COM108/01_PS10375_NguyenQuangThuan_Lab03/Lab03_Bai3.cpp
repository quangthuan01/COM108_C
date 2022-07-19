#include <stdio.h>
int main()
{
	// khai b�o bien
	float soDien;
	static float bac1, bac2, bac3, bac4, bac5, bac6, value12, value345;
	//gán giá trị mặc định
		bac1 = 1678;
		bac2 = 1734;
		bac3 = 2014;
		bac4 = 2536;
		bac5 = 2834;
		bac6 = 2927;
		value12 = 50;
		value345 = 100;
	// Bai 03 tinh tien dien
	// nhap tu ban phim
	do
	{
		printf("Vui long nhap  so dien: ");
		scanf("%f", &soDien);
	} while (soDien <= 0);

	if (soDien > 400)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND", (value12*bac1) + (value12*bac2) + (value345*bac3) + (value345*bac4) + (value345*bac5) + ((soDien - ((value12*2) + (value345 * 3))) * bac6));
		printf("\n<====================================>\n");
	}
	else if (soDien > 300)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND",(value12*bac1) + (value12*bac2) + (value345*bac3) + (value345*bac4) + ((soDien - ((value12*2) + (value345 * 2))) * bac5));
		printf("\n<====================================>\n");
	}
	else if (soDien > 200)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND", (value12*bac1) + (value12*bac2) + (value345*bac3) + ((soDien - ((value12*2) + (value345 * 1))) * bac4));
		printf("\n<====================================>\n");
	}
	else if (soDien > 100)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND",(value12*bac1) + (value12*bac2) + ((soDien - (value12*2) ) * bac3));
		printf("\n<====================================>\n");
	}
	else if (soDien > 50)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND", (value12*bac1) + ((soDien - (value12*1) ) * bac2));
		printf("\n<====================================>\n");
	}
	else
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND", (soDien * bac1));
		printf("\n<====================================>\n");
	}

	return 0;
}
