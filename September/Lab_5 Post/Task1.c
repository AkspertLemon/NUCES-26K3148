#include <stdio.h> 
int main() {
	float temp;
	printf("Enter temp in celcius: ");
	scanf("%f",&temp);
	if (temp<15){printf("Temp is cold");}
	else if (temp>=15&&temp<=30){printf("Temp is normal");}
	else {printf("Temp is hot");}
}
