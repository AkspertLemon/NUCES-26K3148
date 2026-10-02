#include <stdio.h>
int main(){
	int employees[6],salary,count;
	for (int i=0;i<=5;i++){
		printf("Enter employee %d salary: ",i+1);
		scanf("%d",&salary);
		employees[i] = salary;
		count += (salary>50000) ? 1:0;		
	}
	printf("\n");
	for (int i=0;i<=5;i++){
		printf("Employee %d salary: %d\n",i+1,employees[i]);
	}
	printf("Employees with salary greater than 50K: %d",count);	
}
