#include <stdio.h>

int main() {
    int apntmnt,dctr,rgstr;
    printf("Do you have an appointment (1/0): ");
    scanf(" %d",&apntmnt);
    if (apntmnt==1){
        printf("Is doctor available (1/0): ");
        scanf(" %d",&dctr);
        if (dctr==1){
            printf("Registration complete? (1/0): ");
            scanf(" %d",&rgstr);
            if (rgstr==1){printf("\nSuccess, You can go!");}
            else{printf("Cancelled, registration not complete");}
        }
        else {printf("Cancelled, Doctor not available.");}
    }
    else{printf("Cancelled, No appointment made.");}
}
