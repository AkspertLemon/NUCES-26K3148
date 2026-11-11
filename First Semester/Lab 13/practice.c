#include <stdio.h>
int isEven(int n){
	return (n%2 == 0 ) ? 1:0;
}
int main(){
	int (*e)(int);  //Important line
	e = isEven;     //Important Line
	int x = 10;
	printf("%d is %s\n",x,(e(x))?"Even":"odd");
	x = 11;
	printf("%d is %s\n",x,(e(x))?"Even":"odd");
	x = 21;
	printf("%d is %s\n",x,(e(x))?"Even":"odd");
}

//int main(){
//	int secA[5]={1,2,3,4,5};
//	int secB[3]={22,15,91};
//	int secC[3]={100,99,1};
//	int secSize[3] = {5,3,3};
//	int i,j;
//	int *p[]={secA,secB,secC};
//	for(j=0;j<3;j++){
//		printf("Section %c\n",j+65);
//		printf("Value\tAddress\n");
//		for(i=0;i<secSize[j];i++){
//			printf("%-5d\t%p\n",*(p[j]+i),(p[j]+i));
//		}
//		printf("\n");
//	}
//}

