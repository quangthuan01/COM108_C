#include <stdio.h>
#include <math.h>

// hàm kiểm tra số nguyên
int check_integer(float x)
{
	// flag = 1 => số nguyên
	// flag = 0 => không phải số nguyên
	int flag = 1;
	if (ceil(x) != floor(x))
	{
		flag = 0;
	}
	return flag;
};

// hàm kiểm tra số chính phương
int check_square(int n)
{
	// flag = 1 => số chính phương
	// flag = 0 => không phải số chính phương
	int flag = 0;
	// Tìm số bất kỳ nhỏ hơn hoặc bằng n mà bình phương bằng n
	int i = 0;
	while (i <= n)
	{
		if (pow(i, 2) == n)
		{
			flag = 1;
			break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
		}
		i++;
	}
	return flag;
}

// hàm kiểm tra số nguyên tố
int check_elemental(int e)
{
	int flag = 0;
	for (int i = 2; i <= sqrt(e); i++)
	{
		if (e % i == 0)
		{
			flag++;
		};
	};
	return flag;
}
// main
int main()
{
	// kiem tra so nguyen, nguyen to, so chinh phuong
	// khai bao
	float x;
	int check_i, check_e, check_sq;
	// nhap gia tri tu man hinh
	printf("Vui long nhap so x: ");
	scanf("%f", &x);
	check_i = check_integer(x);
	check_e = check_elemental(x);
	check_sq = check_square(x);

	// kiểm tra số nguyên
	if (check_i == 1)
	{
		printf("\n\n==========================================\n\n");
		printf("1. Check interger \n");
		printf("\n\n\t %.1f  la so nguyen!\n\n", x);
		printf("\n\n==========================================\n\n");
	}
	else
	{
		printf("\n\n==========================================\n\n");
		printf("1. Check interger \n");
		printf("\n\n\t %.1f  khong phai la so nguyen!\n\n", x);
		printf("\n\n==========================================\n\n");
	};

	// kiểm tra số nguyên tố
	if (check_e == 0)
	{
		printf("\n\n==========================================\n\n");
		printf("2. Check square \n");
		printf("\n\n\t %.1f  la so nguyen to!\n\n", x);
		printf("\n\n==========================================\n\n");
	}
	else
	{
		printf("\n\n==========================================\n\n");
		printf("2. Check square \n");
		printf("\n\n\t %.1f  khong phai la so nguyen to!\n\n", x);
		printf("\n\n==========================================\n\n");
	};

	// kiểm tra số chính phương
	if (check_sq == 1)
	{
		printf("\n\n==========================================\n\n");
		printf("3.Check elemental\n");
		printf("\n\n\t %.1f  la so chinh phuong\n\n", x);
		printf("\n\n==========================================\n\n");
	}
	else
	{
		printf("\n\n==========================================\n\n");
		printf("3.Check elemental\n");
		printf("\n\n\t %.1f  khong phai la so chinh phuong\n\n", x);
		printf("\n\n==========================================\n\n");
	};

	return 0;
}
