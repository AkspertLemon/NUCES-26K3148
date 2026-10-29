#include <stdio.h>

int main(void)
{
	int p,q,tp=0;
	int items[5][2];
	for(int i=0;i<5;i++){
		printf("Item %d\n",i+1);	
		printf("Enter quantity: ");
		scanf("%d",&items[i][0]);
		printf("Enter price: ");
		scanf("%d",&items[i][1]);
		printf("\n");
	}
	for (int i=0;i<5;i++){
		p = items[i][0]*items[i][1];
		tp+=p;
		printf("Total Price of Item %d is %d\n",i+1,p);
	}
	printf("Total price of all items is %d",tp);
	return 0;
}
