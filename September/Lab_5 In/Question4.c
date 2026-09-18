#include <stdio.h>
int main(){
	int marks;
	printf("Enter marks: ");
	scanf(" %d",&marks);
	printf("\n");
	(marks>=50 ? printf("Pass"):printf("Fail"));	
}