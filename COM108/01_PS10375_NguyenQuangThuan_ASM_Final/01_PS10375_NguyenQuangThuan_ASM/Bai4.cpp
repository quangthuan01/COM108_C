#include <stdio.h>
int main()
{
    //Bai4
    //Tính tiền điện
	// khai báo biến
	float soDien;
	static float bac1, bac2, bac3, bac4, bac5, bac6, step50, step100;
	//gán giá trị mặc định
		bac1 = 1678;
		bac2 = 1734;
		bac3 = 2014;
		bac4 = 2536;
		bac5 = 2834;
		bac6 = 2927;
		step50 = 50;
		step100 = 100;
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
		printf("\n\n\tSo tien dien cua ban la: %.1f VND", (step50*bac1) + (step50*bac2) + (step100*bac3) + (step100*bac4) + (step100*bac5) + ((soDien - ((step50*2) + (step100 * 3))) * bac6));
		printf("\n<====================================>\n");
	}
	else if (soDien > 300)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND",(step50*bac1) + (step50*bac2) + (step100*bac3) + (step100*bac4) + ((soDien - ((step50*2) + (step100 * 2))) * bac5));
		printf("\n<====================================>\n");
	}
	else if (soDien > 200)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND", (step50*bac1) + (step50*bac2) + (step100*bac3) + ((soDien - ((step50*2) + (step100 * 1))) * bac4));
		printf("\n<====================================>\n");
	}
	else if (soDien > 100)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND",(step50*bac1) + (step50*bac2) + ((soDien - (step50*2) ) * bac3));
		printf("\n<====================================>\n");
	}
	else if (soDien > 50)
	{
		printf("\n<====================================>\n");
		printf("\n\tBai 03 tinh so tien dien\n");
		printf("\n\n\tSo tien dien cua ban la: %.1f VND", (step50*bac1) + ((soDien - (step50*1) ) * bac2));
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
