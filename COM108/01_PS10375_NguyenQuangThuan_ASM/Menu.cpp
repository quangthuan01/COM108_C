#include <stdio.h>
#include <stdlib.h>
int main(){
//Bai ASM 
//khai bao bien choose
int choose;
//thong tin menu
printf("\n\n=========================================================\n");
printf("\nGioi Thieu\n\n");
printf("\nGVBM: Co Nguyen Thi Do Quyen\n\n");
printf("\nTenSV: Nguyen Quang Thuan\n\n");
printf("\nMSSV: PS10375\n\n");
printf("\nLop: IT18201_3\n\n");
printf("\nMenu Chuong Trinh\n\n");
printf("\n\t1.Bai 1 Kiem tra so nguyen, nguyen to, chinh phuong\n\n");
printf("\n\t2.Bai 2 Tim boi chung va uoc chung\n\n");
printf("\n\t3.Bai 3 Chuong trinh tinh tien quan karaoke\n\n");
printf("\n\t4.Bai 4 Tinh tien dien\n\n");
printf("\n\t5.Bai 5 Chuc nang doi tien\n\n");
printf("\n\t6.Bai 6 Chuc nang tinh lai ngan hang\n\n");
printf("\n\t7.Bai 7 Chuong trinh vay tien mua xe may\n\n");
printf("\n\t8.Bai 8 Sap xep thong tin sinh vien\n\n");
printf("\n\t9.Bai 9 Xay dung game FPOLY-LOTT\n\n");
printf("\n\t10.Bai 10 Xay dung chuong trinh tinh toan phan so\n\n");
printf("\n\n===========================================================\n");

	do{
		printf("\nLua chon cua ban tu 1-10: ");
		//nhan gia tri tu man hinh
		scanf("%d", &choose);	
	}while(choose<1 || choose>10);

//switch case
	switch(choose){
			
			case 1: 
					printf("\n\t1.Bai 1 Kiem tra so nguyen\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai1.exe");
					break;
			case 2: 
					printf("\n\t2.Bai 2 Tim boi chung va uoc chung\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai2.exe");
					break;
			case 3: 
					printf("\n\t3.Bai 3 Chuong trinh tinh tien quan karaoke\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai3.exe");
					break;
			case 4: 
					printf("\n\t4.Bai 4 Tinh tien dien\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai4.exe");
					break;
			case 5: 
					printf("\n\t5.Bai 5 Chuc nang doi tien\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai5.exe");
					break;
			case 6: 
					printf("\n\t6.Bai 6 Chuc nang tinh lai ngan hang\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai6.exe");
					break;
			case 7: 
					printf("\n\t7.Bai 7 Chuong trinh vay tien mua xe may\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai7.exe");
					break;
			case 8: 
					printf("\n\t8.Bai 8 Sap xep thong tin sinh vien\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai8.exe");
					break;
			case 9: 
					printf("\n\t9.Bai 9 Xay dung game FPOLY-LOTT\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai9.exe");
					break;
			case 10: 
					printf("\n\t10.Bai 10 Xay dung chuong trinh tinh toan phan so\n\n");
					printf("\n\n=====================================\n\n");
					system("Bai10.exe");
					break;
			default: 
					break;
			
		};
		
return 0;

}
