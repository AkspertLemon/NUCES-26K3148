#include <stdio.h>
int main(){
	int num;
	do{
		printf("Enter number:\n");
		scanf("%d",&num);
		(num!=0)?printf("The cube is %d\n\n",num*num*num):printf("\nLoop ended\n");
			
	}while(num!=0);
}
