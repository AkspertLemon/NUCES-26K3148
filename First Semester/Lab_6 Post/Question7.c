#include <stdio.h>
int main(){
	int matches,ffStat; // Matches, Fitness Failure Status
	float bAvg;
	printf("Enter matches played, Fitness Failure Status and average batting score:\n");
	scanf("%d %d %f",&matches,&ffStat,&bAvg);
	if (matches<5){
		printf("Rejected-Insuffecient matches");
		return 0;
	}
	else{
		if(matches>10 && bAvg > 35.0){
			printf("Selected");
		}
		else{
			if (matches>20 && bAvg >= 25.0){
				(ffStat == 0) ? printf("Selected - Experience Quota"):printf("Rejected - Fitness");
			}
			else{printf("Rejected-Insuffecient matches");}
		}
	}
}
