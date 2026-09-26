#include <stdio.h>

int main() {
    int rstrnt,item,money;
    printf("Is resturant open? (1/0): ");
    scanf(" %d",&rstrnt);
    if (rstrnt==1){
        printf("Is item available (1/0): ");
        scanf(" %d",&item);
        if (item==1){
            printf("Suffecient Balance? (1/0): ");
            scanf(" %d",&money);
            if (money==1){printf("\nSuccess, You can go!");}
            else{printf("Cancelled, Not enough balance.");}
        }
        else {printf("Cancelled, Item not available.");}
    }
    else{printf("Cancelled, Resturant not open.");}
}
