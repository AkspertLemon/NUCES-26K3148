#include <stdio.h>
int menu(){
	int c;
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Exit\n");
	printf("Input: ");
	scanf("%d",&c);
	return c;
}
void makePositive(float *val){
	printf("\n");
	while(*val<0.0f){
		printf("Enter a positive amount: ");
		scanf("%f",val);
	}
	return;
}
void depositInto(float *bal){
	float amnt;
	printf("Enter amount to deposit: ");
	scanf("%f",&amnt);
	makePositive(&amnt);
	*bal += amnt;
	printf("\nSuccessful Deposit, New Balance: %.2f\n\n",*bal);
	return;
}
void withdrawFrom(float *bal){
	float amnt;
	printf("Enter amount to withdraw: ");
	scanf("%f",&amnt);
	makePositive(&amnt);
	if(amnt>10000.0f){
		printf("Unsuccessful, can't withdraw more than 10,000\n\n");
		return;
	}
	if(amnt>*bal){
		printf("Unsuccessful, can't withdraw more than current balance\n\n");
		return;
	}
	*bal -= amnt;
	printf("\nSuccessful withdrawal, New Balance: %.2f\n",*bal);
	if(*bal<5000.0f){
		printf("Low balance warning(Less than 5000)\n\n");
	}
	return;
}
int main(void)
{
	int choice;
	float balance=20000.0f;
	do{
		choice = menu();
		switch(choice){
			case 1:
				printf("\nCurrent Balance is %.2f\n\n",balance);
				break;
			case 2:
				depositInto(&balance);
				break;
			case 3:
				withdrawFrom(&balance);
				break;
			case 4:
				printf("\nExitiing\n\n");
				break;
			default:
				printf("\nInvalid Choice\n\n");
				break;
		}
	}while(choice!=4);
	return 0;
}
