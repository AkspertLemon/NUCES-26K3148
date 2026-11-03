#include <stdio.h>
int reverseOf(int num){
	int reverse,n=num;
	while(n!=0){
		reverse = reverse*10 + n%10;
		n=n/10;
		
	}
	return reverse;
}
int isEven(int num){
	if(num%2==0){return 1;}
	else{return 0;}
}
int isPrime(int num){
	for(int i=2;i<num/2;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
int main(void)
{
//	for(int i=1;i<102;i++){
//		printf("%d\t%s",i,(isEven(i))?"even":"odd");
//		printf("\t%-10s",(isPrime(i))?"prime":"not prime");
//		printf("\t%s\n",(i==reverseOf(i))?"palindrome":"not palindrome");
//	}
	int number;
	printf("Input Number: ");
	scanf("%d",&number);
	
	printf("%s",(isEven(number))?"even":"odd");
	printf("\t%-10s",(isPrime(number))?"prime":"not prime");
	printf("\t%s\n",(number==reverseOf(number))?"palindrome":"not palindrome");
	return 0;
}
