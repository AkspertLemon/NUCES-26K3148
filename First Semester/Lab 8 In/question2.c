#include <stdio.h>
void welcome(){
	printf("\nATM Management System\n");
	return;
}
void displayAmount(float amnt){
	printf("Amount: %.2f",amnt);
	return;
}
float getWithDrawalLimit(){
	return 50000.0;
}
float calculateBalance(float amnt,float withdraw){
	return amnt-withdraw;
}
int checkWithdrawal(float balance,float withdraw,float max){
	if(withdraw>balance || withdraw<=0.0f || withdraw>max){
		return 0;
	}
	else{return 1;}
}
int main(){
	float amnt,withD,newAmnt;
	
	welcome();
	printf("Enter current bank amount: ");
	scanf("%f",&amnt);
	printf("Enter withdrawl amount: ");
	scanf("%f",&withD);
	printf("\nWithdraw ");
	
	
	displayAmount(withD);
	if (checkWithdrawal(amnt,withD,getWithDrawalLimit())){
		printf("\nWithdrawal Successful\n");
		newAmnt = calculateBalance(amnt,withD);
		displayAmount(newAmnt);	
	}
	else{
		printf("\nWithdrawal not successful\n");
	}
}