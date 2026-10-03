#include <stdio.h>
int main()
{
    float TempC;
    printf("\n");
    printf("Enter Temperature in Celsius:\n");
    scanf("%f",&TempC);
    printf("\nIn Farenheit: %.2f",(TempC*9/5)+32);
}