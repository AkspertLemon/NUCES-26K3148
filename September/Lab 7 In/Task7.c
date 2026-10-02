#include <stdio.h>
int main(){
	int count=0,bill=0,price,choice=1;
	char name[100];
	while(choice==1){
		printf("Enter name of food: ");
		scanf("%s",&name);
		printf("Enter price: ");
		scanf("%d",&price);
		bill = bill + price;
		count++;
		printf("\nLike to order another item (1/0)\n: ");
		scanf("%d",&choice);
	}
	printf("\nNumber of items ordered: %d\nTotal bill: %d",count,bill);
}
