#include <stdio.h>

int main(void)
{
	int i,j;
	for(i=1;i<=8;i++){
		for(j=1;j<=i;j++){
			printf("%d ",(j%4!=0)?1:0);
		}
		printf("\n");
	}
}
