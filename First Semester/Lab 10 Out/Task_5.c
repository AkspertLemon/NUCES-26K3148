#include <stdio.h>
float bonusOf(float salary,int year){
	if(year>=5){
		return salary*0.15;
	}
	else if (year>=3){
		return salary*0.10;
	}
	else if(year>=0){
		return salary*0.05;
	}
	else{
		printf("\nYear should be positive\n");
		return 0.0f;
	}
}
float tax(float salary){
	return (salary>100000)?salary*0.05f :0.0f;
}
int main(){
	float amnt;
	int y;
	printf("Enter salary amount: ");
	scanf("%f",&amnt);
	printf("Enter years worked: ");
	scanf("%d",&y);
	printf("\nBonus:        %.2f",bonusOf(amnt,y));
	amnt += bonusOf(amnt,y);
	printf("\nTax:          %.2f",tax(amnt));
	printf("\nFinal Salary: %.2f", amnt-tax(amnt));
}
