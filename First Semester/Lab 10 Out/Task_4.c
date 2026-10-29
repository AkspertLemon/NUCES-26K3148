#include <stdio.h>
void inputVals(int *c,int *u){
	printf("Enter Customer type\n1.Domestic\n2.Commercial\n");
	scanf("%d",c);
	printf("Units consumed:\n");
	scanf("%d",u);
}
float surchargeOf(float bill){
	return (bill>=5000)?bill*0.05f:0.0f;
}
int main(void)
{
	float amnt,surcharge,final;
	int units,cType;
	
	inputVals(&cType,&units);
	
	if(cType==1){amnt = (float)(units<=100)?units*15.0f:(units-100)*20.0f + 1500.0f;}
	else{amnt = (float)units*25.0f;}
	
	surcharge=surchargeOf(amnt);
	
	final = amnt+surcharge;
	printf("Bill Amount:  %.2f\n",amnt);
	printf("Surcharge:    %.2f\n",surcharge);
	printf("Final Amount: %.2f\n",final);
	return 0;
}
