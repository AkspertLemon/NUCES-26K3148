#include <stdio.h>

int main(void)
{
	int a=10,b=20,tmp;
	int *ap=&a,*bp=&b;
	printf("a Value: %d  Address: %p\n",*ap,ap);
	printf("b Value: %d  Address: %p\n",*bp,bp);
	
	tmp=*ap;
	*ap=*bp;
	*bp=tmp;
	printf("\nAfter Swap\n");
	printf("a Value: %d  Address: %p\n",*ap,ap);
	printf("b Value: %d  Address: %p\n",*bp,bp);
}
