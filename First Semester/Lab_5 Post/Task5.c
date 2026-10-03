#include <stdio.h>
int main(){
	int firstChoice,choice,pin,balance;
	printf("1.Balance inquiry\n2.Cash Withdrawal\n3.Cash Deposit\n4.PIN Change\nYour Choice: ");
	scanf("%d",&firstChoice);
	switch(firstChoice){
		case 1: // Balance check
			printf("\n\n1.Saving Accounts\n2.Current Account\nYour Choice: ");
			scanf("%d",&choice);
			switch (choice)
			{
			case 1:
				printf("Your saving account balance is");
				break;
			case 2:
				printf("Your current account balance is");
				break;
			}
			break;
		case 2: //Withdraw
			printf("\n\n1.Saving Accounts\n2.Current Account\nYour Choice: ");
			scanf("%d",&choice);
			printf("Enter withdraw amount:");
			scanf("%d",&balance);
			switch (choice){
				case 1:
					printf("\nYou have withdrawn %d$ from savings account.",balance);
					break;
				case 2:
					printf("\nYou have withdrawn %d$ from current account.",balance);
					break;
			}
			break;
		case 3: //Deposit
			printf("\n\n1.Saving Accounts\n2.Current Account\nYour Choice: ");
			scanf("%d",&choice);
			printf("Enter deposit amount:");
			scanf("%d",balance);
			switch (choice){
				case 1:
					printf("\nYou have deposited %d$ in savings account.",balance);
					break;
				case 2:
					printf("\nYou have deposited %d$ in current account.",balance);
					break;
			}
			break;
		case 4: // PIN change
			printf("\n\n1.Saving Accounts\n2.Current Account\nYour Choice: ");
			scanf("%d",&choice);
			printf("Enter new pin:");
			scanf("%d",&pin);
			switch (choice){
				case 1:
					printf("\nYour new pin is %d for savings account.",pin);
					break;
				case 2:
					printf("\nYour new pin is %d for current account.",pin);
					break;
			}
			break;
	}
}