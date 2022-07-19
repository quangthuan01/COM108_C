#include <stdio.h>
#include <stdlib.h>
int main(){
//Bai 04 Menu
//khai bao bien choose
int choose,quit = 0;
//thong tin menu
    printf("\n\n=========================================================\n");
    printf("\nMenu chuong trinh Lab 04\n\n");
    printf("\n\t1.Bai 1\n\n");
    printf("\n\t2.Bai 2\n\n");
    printf("\n\t3.Bai 3\n\n");
    printf("\n\t4.Thoat khoi chuong trinh\n\n");
    printf("\n\n===========================================================\n");

	do{
		printf("\nLua chon cua ban tu 1-4: ");
		//nhan gia tri tu man hinh
		scanf("%d", &choose);	
	}while(choose<1 || choose>4);

//switch case
	switch(choose){
			
			case 1: 
					printf("\n\nBai 1: Tinh trung binh tong cac so tu nhien chia het cho 2\n\n");
					printf("\n\n=====================================\n\n");
					system("Lab04_Bai1.exe");
					break;
			case 2: 
					printf("\n\nBai 2: Xay dung chuong trinh xac dinh so nguyen to\n\n");
					printf("\n\n=====================================\n\n");
					system("Lab04_Bai2.exe");
					break;
			case 3: 
					printf("\n\nBai 3: Xay dung chuong trinh so chinh phuong\n\n");
					printf("\n\n=====================================\n\n");
					system("Lab04_Bai3.exe");
					break;
			case 4: 
                    printf("\n\nDa thoat chuong trinh\n\n");
					return 0;
					break;
			default: 
					break;
			
		};
		
return 0;

}
