#include <stdio.h>
int main(){
	int netCode,weekend;
	float load,bonus=0.0;
	printf("Enter Mobile load, Net code and if it is a weekend(0/1):\n");
	scanf("%f %d %d",&load,&netCode,&weekend);
	if(load>=100.0 && load <= 499 && weekend==1){
		bonus=(netCode!=3)?10.0:5.0;
	}
	else if(load>=100.0 && load <= 499 && weekend==0){
		bonus=5.0;
	}
	else if(load>=500 && (netCode==1 || weekend==1)){
		bonus=20.0;
	}
	else{bonus=12.0;}
	printf("\nBonus:\t%.2f \nFinal Balance:\t%.2f\n",bonus,load*(1+bonus/100.0));		
}
