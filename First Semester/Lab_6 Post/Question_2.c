#include <stdio.h>
int main()
{
    float bill,discount=0.0;
    int stat;
    printf("Enter Bill and Membership status:\n");
    scanf("%f %d",&bill,&stat);
    if (bill>=500.0 && bill<=1999.0){discount = (stat=1) ? 10.0 : 5.0;}
    else if (bill>1999.0){discount = (stat=1) ? 15.0 : 8.0;}
    discount = bill*discount/100.0;
    printf("\nDiscount:\t%.2f\nPayable Amount:\t%.2f\n",discount,bill-discount);
    return 0;
}
