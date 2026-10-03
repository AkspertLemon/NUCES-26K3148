#include <stdio.h>
int main(){
	int choice,mark,count=0,sum=0;
	do{
		printf("Enter mark: ");
		scanf("%d",&mark);
		count++;
		sum = sum + mark;
		printf("Add another student mark? (1/0): ");
		scanf("%d",&choice);
	}while(choice!=0);
	printf("\nSum: %d\nNumber of students: %d",sum,count);
}
