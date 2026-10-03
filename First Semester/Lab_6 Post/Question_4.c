#include <stdio.h>
int main()
{
    int max,curr,diff;
    float fillRate,cost,time;
    printf("Enter max capacity and current water level:\n");
    scanf("%d %d",&max,&curr);
    diff = (max - curr)*1.0;
    if (diff==0){printf("Tank already full");}
    else{
    	printf("Enter fillrate:");
    	scanf("%f",&fillRate);
    	time = diff*1.0/fillRate;
    	cost = time * 3.5;
    	printf("Time take to fill:\t%.2f\n",time);
    	printf("Cost taken:\t\t%.2f",cost);
	}
    return 0;
}