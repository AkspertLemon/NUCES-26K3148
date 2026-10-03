#include <stdio.h>
int main()
{
    int Days;
    printf("Enter number of late days: ");
    scanf("%d",&Days);
    if (Days>10)
    {
        printf("Fine:Rs. 200");
    }
    else{
        if (Days>6)
        {
            printf("Fine: Rs100");
        }
        else {
            if (Days>0)
            {
                printf("Fine: Rs50");
            }
            else{
                printf("No Fine");
            }
        }
    }
    return 0;   
}
