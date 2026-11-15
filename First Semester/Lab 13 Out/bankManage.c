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
	return n1+n2;
}
int withdraw(int n1,int n2){
	return n1-n2;
}
// Task 6
int processTransaction(int bal, int amnt, int (*op)(int,int)){
	return op(bal,amnt);
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
	int *transP = transactions;
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
	printf("\n\n");
	//Task 5, Functions created above main
	int (*op)(int, int);
	op = withdraw;
	printf("Withdraw amount %d from balance %d is %d\n",600,1000,op(1000,600));
	op = deposit;
	printf("Deposit amount %d into balance %d is %d\n",600,1000,op(1000,600));
	printf("\n\n");
	// Task 6
	int Balance = 10000;
	int amnt = 2300;
	printf("Original balance: %d\n",Balance);
	Balance = processTransaction(Balance,amnt,withdraw);
	printf("Withdraw Amnt: %d\nBalance: %d\n",amnt,Balance);
	amnt = 6800;
	Balance = processTransaction(Balance,amnt,deposit);
	printf("Deposit Amnt: %d\nBalance: %d",amnt,Balance);
}
