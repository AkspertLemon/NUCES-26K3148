#include <stdio.h>

int main() {
    int balance;
    printf("Enter balance: ");
    scanf("%d",&balance);
    if (balance<500){printf("Low Balance");}
    else if(balance >= 500 && balance <= 2000){printf("Sufficient Balance");}
    else {printf("Premium Balance");}
}
