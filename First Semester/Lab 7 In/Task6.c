#include <stdio.h>
int main(){
	int deposit,sum=0,count=0;
	do{
		printf("Enter monthly deposit: ");
		scanf("%d",&deposit);
		if (deposit>0){
			sum = sum + deposit;
			count++;
		}
	}while(deposit>0);
	printf("\nCount: %d\nSum: %d",count,sum);
}
