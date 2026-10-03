#include <stdio.h>
int main(){
	int sec,dep;
	printf("Enter department: ");
	scanf("%d",&dep);
	printf("Enter section: ");
	scanf("%d",&sec);
	printf("\nDepartment: ");
	switch(dep){
		case 1:
			printf("CS");
			break;
		case 2:
			printf("IT");
			break;
		case 3:
			printf("AI");
			break;
		default:
			printf("No such department");
			break;
	}
	printf("\nSection: ");
	switch(sec){
		case 1:
			printf("A");
			break;
		case 2:
			printf("B");
			break;
		default:
			printf("No such section");
			break;
	}
}
