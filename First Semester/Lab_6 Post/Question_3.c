#include <stdio.h>
int main()
{
    int m;
    char g[2];
    printf("Enter Marks: ");
    scanf("%d",&m);
    printf("\nGrade: ");
    if (m>=90){printf("A+");}
    else if (m>=80){printf("A");}
    else if (m>=70){printf("B");}
    else if (m>=60){printf("C");}
    else if (m>=50){printf("D");}
    else {printf("F");} 
    if(m<50){printf("\nResult: Fail");}
    else{printf("\nResult: Pass");}   
    
    return 0;
}