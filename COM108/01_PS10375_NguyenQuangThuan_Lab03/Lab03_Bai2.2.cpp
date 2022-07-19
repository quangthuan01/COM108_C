#include <stdio.h>
#include <math.h>
int main(){
// khai báo bien 

float a,b,c,delta, x1,x2;
//Bai 02.2 giai phuong trinh bac 2  
// ax2+bx+c=0
//nhap tu ban phim

	printf("Vui long nhap  so a: ");
	scanf("%f", &a);
	printf("Vui long nhap  so b: ");
	scanf("%f", &b);
	printf("Vui long nhap  so b: ");
	scanf("%f", &c);
	
	if(a == 0){
		
		if(b==0 && c==0){
			printf("\n<====================================>\n");
			printf("\n\tBai 02.2 giai phuong trinh bac 2\n");
			printf("\n\n\tPhuong trinh co vo so nghiem!\n\n");
			printf("\n<====================================>\n");
		}else if(b==0 && c!= 0 ){
			printf("\n<====================================>\n");
			printf("\n\tBai 02.2 giai phuong trinh bac 2\n");
			printf("\n\n\tPhuong trinh vo nghiem!\n\n");
			printf("\n<====================================>\n");
		}else{
			printf("\n<====================================>\n");
			printf("\n\tBai 02.2 giai phuong trinh bac 2\n");
			printf("\n\n\tPhuong trinh co nghiem x=: \n\n%f", -c/b);
			printf("\n<====================================>\n");
		};

	}else{
		
		delta = b*b - 4*a*c;
		x1 = (-b+delta)/(2*a);
		x2 = (-b-delta)/(2*a);
		
			if	(delta == 0){
				
				printf("\n<====================================>\n");
				printf("\n\tBai 02.2 giai phuong trinh bac 2\n");
				printf("\n\n\tPhuong trinh co nghiem kep x=: %f", (-b/(2*a)));
				printf("\n<====================================>\n");
				
			}else if (delta<0){
				
				printf("\n<====================================>\n");
				printf("\n\tBai 02.2 giai phuong trinh bac 2\n");
				printf("\n\n\tPhuong trinh vo nghiem!\n\n");
				printf("\n<====================================>\n");
				
			}else{
				printf("\n<====================================>\n");
				printf("\n\tBai 02.2 giai phuong trinh bac 2\n");
				printf("\n\n\tPhuong trinh co 2 nghiem!\n\n");
				printf("\n\n\tPhuong trinh co nghiem x1 = %f", x1);
				printf("\n\n\tPhuong trinh co nghiem x2 = %f", x2);
				printf("\n<====================================>\n");
			};
		};
		
	

return 0;

}
