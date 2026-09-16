#include <stdio.h>
int main()
{
    int Grade, Income;
    printf("Enter grades and family income: ");
    scanf("%d %d",&Grade,&Income);
    printf("\n\n");
    if (Grade>80 ||Income<50000){
        printf("Congratulations, you are elligible for scholarship");
    }
    else{
        printf("Not elligible for scholarship");
    }

    return 0;
}
