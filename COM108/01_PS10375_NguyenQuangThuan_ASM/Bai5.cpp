#include<stdio.h>
int main(){
//Bài 5
//Chuc nang doi money
//khai báo biến
 int money,to500=0,to200=0,to100=0,to50=0,to20=0,to10=0,to5=0,to2=0,to1=0;
    printf("Vui long nhap so tien ban muon doi: ");
    scanf("%d",&money);
    switch(money)
    {
    	case 500:
    		{
    			to200=money/200;
				to100=money%200/100;
				to50=money%200%100/50;
				to20=money%200%100%50/20;
				to10=money%200%100%50%20/10;
				to5=money%200%100%50%20%10/5;
				to2=money%200%100%50%20%10%5/2;
				to1=money%200%100%50%20%10%5%2/1;
    			break;
    		}
		case 200:
		{
				to100=money/100;
				to50=money%100/50;
				to20=money%100%50/20;
				to10=money%100%50%20/10;
				to5=money%100%50%20%10/5;
				to2=money%100%50%20%10%5/2;
				to1=money%100%50%20%10%5%2/1;	
			break;
		}
		case 100:
		{
			to50=money/50;
			to20=money%50/20;
			to10=money%50%20/10;
			to5=money%50%20%10/5;
			to2=money%50%20%10%5/2;
			to1=money%50%20%10%5%2/1;	
			break;
		}
		case 50:
		{
			to20=money/20;
			to10=money%20/10;
			to5=money%20%10/5;
			to2=money%20%10%5/2;
			to1=money%20%10%5%2/1;
			break;
		}
		case 20:
		{	
			to10=money/10;
			to5=money%10/5;
			to2=money%10%5/2;
			to1=money%10%5%2/1;
			break;
		}
		case 10:
		{
			to5=money/5;
			to2=money%5/2;
			to1=money%5%2/1;
			break;
		}
		case 5:
		{
			to2=money/2;
			to1=money%2/1;
			break;
		}
		case 2:
		{
			to1=money/1;
			break;
		}
		case 1:
		{	
			to1=money/1;
			break;
		}
		default:
			{
				to500=money/500;
				to200=money%500/200;
				to100=money%500%200/100;
				to50=money%500%200%100/50;
				to20=money%500%200%100%50/20;
				to10=money%500%200%100%50%20/10;
				to5=money%500%200%100%50%20%10/5;
				to2=money%500%200%100%50%20%10%5/2;
				to1=money%500%200%100%50%20%10%5%2/1;
				printf("*ngoaile*");
				break;	
			}
	}
    printf("\n============================================================\n");
	printf("\nto500:%d",to500);
	printf("\nto200:%d",to200);
	printf("\nto100:%d",to100);
	printf("\nto50:%d",to50);
	printf("\nto20:%d",to20);
	printf("\nto10:%d",to10);
	printf("\nto5:%d",to5);
	printf("\nto2:%d",to2);
	printf("\nto1:%d",to1);
    printf("\n============================================================\n");


return 0;
}