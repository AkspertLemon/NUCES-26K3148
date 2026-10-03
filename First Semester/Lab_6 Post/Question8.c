#include <stdio.h>
int main(){
	int meal,ctype;
	float bill,service,discount;
	printf("Enter meal type, bill amount and customer type:\n");
	scanf("%d %f %d",&meal,&bill,&ctype);
	switch(meal){
		case 1:
			service = 5.0;
			break;
		case 2:
			service = 8.0;
			break;
		case 3:
			service = 10.0;
			break;
	}
	if (bill>=1000.0){discount=(ctype==1)?15.0:10.0;}
	else{discount=(ctype==1)?5.0:0.0;}
	service = bill*service/100.0;
	discount =(discount>0.0)?bill*(discount/100):0.0;
	bill = bill + service;
	printf("Service charge:\t%.2f\nDiscount:\t%.2f\nTotal Amount:\t%.2f\n",service,discount,bill-discount);
}
