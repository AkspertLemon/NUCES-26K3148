#include <stdio.h>
#include <string.h>
int main(void)
{
	char pro1[50],pro2[50];
	printf("Enter Product 1: ");
	scanf("%s",&pro1);
	printf("Enter Product 2: ");
	scanf("%s",&pro2);
//	printf("%d\n",strcmp(pro1,pro2));
	printf("The names are %s\n",(strcmp(pro1,pro2)==0)?"identical":"not identical");
	printf("Product  \tLength\n");
	printf("%-9s\t%6d\n",pro1,strlen(pro1));
	printf("%-9s\t%6d",pro2,strlen(pro2));
}
