#include <stdio.h>

int main(void)
{
	int num1,num2;
	printf("Enter number 1 and number 2:\n");
	scanf("%d %d",&num1,&num2);
	int *p1=&num1,*p2=&num2;
	int prod,sum;
	sum = *p1 + *p2;
	prod = *p1 * *p2;
	printf("\nSum:%d\nProduct:%d",sum,prod);
}
