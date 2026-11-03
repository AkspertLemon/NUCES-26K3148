#include <stdio.h>
int costOf(float weight){
	if(weight>5.0f){return 700.0f;}
	else if(weight>2.0f){return 400.0f;}
	else if(weight>0.0f){return 200.0f;}
	else{return 0.0f;}
}
int DistChrg(float Dist){
	return (Dist>10.0f)? (Dist-10.0f)*20 : 0;
}
void newLine(){
	printf("\n");
	return;
}
int main(void)
{
	int Distance,cType;
	float cost=0,disc,w;
	printf("Enter Parcel Weight: ");
	scanf("%f",&w);
	printf("Enter Distance to travel: ");
	scanf("%d",&Distance);
	printf("Do you have customer membership(1/0): ");
	scanf("%d",&cType);
	
	cost = costOf(w) + DistChrg(Distance);
	cost = (float)cost;
	disc = (cost>1000.0f && cType==1)? 0.1f : 0.0f;
	printf("Base Charge:       %.2f",cost);
	newLine();
	printf("Delivery Charge:   %d",DistChrg(Distance));
	newLine();
	printf("Discount:          %.2f",cost*disc);
	newLine();
	printf("Final Charge:      %.2f",cost*(1.0f-disc));
	newLine();
	return 0;
}
 