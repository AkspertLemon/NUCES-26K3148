#include <stdio.h>
int main(){
	int oDays,bType,pMem;
	float bill=0.0;
	printf("Enter booktype, days overdue and priority membership:\n");
	scanf("%d %d %d",&bType,&oDays,&pMem);
	switch(bType){
		case 1:
			bill=(oDays<=7) ? oDays*5.0:35.0+(oDays-7)*10.0;
			break;
		case 2:
			bill=oDays*15.0;
			break;
		case 3:
			bill=oDays*30.0;
			if(oDays>10){printf("\nBanned from borrowing\n");}
			break;
	}
	if(pMem=1 && bType!=3){bill=bill*0.8;}
	printf("Bill: %.2f",bill);
}
