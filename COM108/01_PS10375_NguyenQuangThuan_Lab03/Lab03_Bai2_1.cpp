#include <stdio.h>
int main()
{
	// khai b�o bien

	float a, b;
	// Bai 02.1 giai phuong trinh bac 1
	//  ax+b=0
	// nhap tu ban phim

	printf("Vui long nhap  so a: ");
	scanf("%f", &a);
	printf("Vui long nhap  so b: ");
	scanf("%f", &b);

	if (a == 0)
	{
		if (b == 0)
		{
			printf("\n<====================================>\n");
			printf("\n\tBai 02.1 giai phuong trinh bac 1\n");
			printf("\n\n\tPhuong trinh co vo so nghiem!\n\n");
			printf("\n<====================================>\n");
		}
		else
		{
			printf("\n<====================================>\n");
			printf("\n\tBai 02.1 giai phuong trinh bac 1\n");
			printf("\n\n\tPhuong trinh vo nghiem!\n\n");
			printf("\n<====================================>\n");
		}
	}
	else
	{

		printf("\n<====================================>\n");
		printf("\n\tBai 02.1 giai phuong trinh bac 1\n");
		printf("\n\n\tPhuong trinh co nghiem x: %f", (-b) / a);
		printf("\n<====================================>\n");
	};

	return 0;
}
