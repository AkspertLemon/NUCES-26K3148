#include <stdio.h>

int main()
{
	float dist,total=0.0;
	int time; // 0- 23
	printf("Enter Distance and Time:\n");
	scanf("%f %d",&dist,&time);
	if (dist<=0.0){
		printf("Invalid Distance");
		return 0;
	}
	else{
		if (dist<=1.0f){
			total = 50.0;
		}
		else{
			dist = dist - 1.0;
			total = 50.0 + 22.0*dist;
		}
		if (time<6 || time>22){
			total += 40.0;
			printf("\nNight surcharge: 40.0");
		}
		printf("\nYour total is RS %.2f",total);
	}
    return 0;
}
