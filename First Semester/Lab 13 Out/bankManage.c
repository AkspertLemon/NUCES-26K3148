#include <stdio.h>
//Task 4, Function creation
int calculateTotal(int *p, int size){
	int i,sum=0;
	for(i=0;i<size;i++){
		sum += *(p+i);
	}
	return sum;
}
// Task 5
int deposit(int n1,int n2){
	
}
int main(void)
{
	int i,j,k;
	// Task 1
	int accounts[] = {15000, 25000, 18000, 32000, 12000};
	int* accP = accounts;
	printf("Accounts\n");
	printf("Customers\tAddress\n");
	for (i=0;i<5;i++){
		printf("%9d\t%p\n",*(accP+i),accP+i);
	}
	printf("\n\n");
	// Task 2
	int transactions[][3] = {
		{120000, 150000,180000}, 
		{200000, 170000, 220000}
	};
	int* transP = transactions;
	printf("Transactions\n");
	printf("Branch 1\n");
	printf("Amount   \tAddress\n");
	for (i=0;i<6;i++){
		if(i==3){
			printf("Branch 2\n");
			printf("Amount   \tAddress\n");
		}
		printf("%9d\t%p\n",*(transP+i),transP+i);
	}
	printf("\n\n");
	// Task 3
	int brAcc1[3] = {15000,23000, 32000};
	int brAcc2[4] = {12000, 21000, 27000, 35000};
	int brSize[2] = {3,4};
	int *brAcc[] = {brAcc1,brAcc2};
	for(j=0;j<2;j++){
		printf("Accounts of branch %d\n",j+1);
		printf("Amount\tAddress\n");
		for(i=0;i<brSize[j];i++){
			printf("%9d\t%p\n",*(brAcc[j]+i),brAcc[j]+i);
		}
	}
	printf("\n\n");
	//Task 4, Function created above main
	printf("Branch 1 Total: %d\n",calculateTotal(brAcc1,3));
	printf("Branch 2 Total: %d\n",calculateTotal(brAcc2,4));
	//Task 5, Functions created above main
	
	
}
