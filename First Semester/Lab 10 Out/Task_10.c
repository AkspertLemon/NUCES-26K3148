#include <stdio.h>
void askFor(int *p,int *q,int *m,int *c){
	printf("Enter price of product: ");
	scanf("%d",p);
	printf("Enter quantity of product: ");
	scanf("%d",q);
	printf("Are you a member?(1/0): ");
	scanf("%d",m);
	printf("Pay by card?(1/0): ");
	scanf("%d",c);
	return;
}

int main(void)
{
	int price,quant,mem,card;
	float subt,total,disc=0.0f;
	askFor(&price,&quant,&mem,&card);
	subt = price*quant;
	printf("\n\nSubtotal: %.2f\n",subt);
	if(subt>5000.0f){
		disc+=0.1f;
		printf("Price Discount: %.2f\n",subt*0.1f);
	}
	if(mem==1){
		disc+=0.05f;
		printf("Member Discount: %.2f\n",subt*0.05f);
	}
	total = subt*(1.0f-disc);
	if(card==1){
		printf("Card Fee: %.2f\n",total*0.02f);
		total+=total*0.02f;
	}
	
	printf("Final Amount: %.2f",total);
	return 0;
}
