#include <stdio.h>

int main(void)
{
	int sumC,sumS,highS=0,highC=0,count=0,indS,indSC,indC;
	int attendance[2][3][4]=
	{
		// First Class
		{
			{1,1,1,0},
			{0,1,1,0},
			{1,1,1,1}
		},
		// Second Class
		{
			{1,0,1,0},
			{1,1,1,1},
			{1,0,1,0}	
		}
	};
	for (int c=0;c<2;c++){
		printf("Class %d:\n",c+1);
		sumC=0;
		for (int s=0;s<3;s++){
			sumS=0;
			printf("Student %d: ",s+1);
			for (int d=0;d<4;d++){
//				printf("%d ",attendance[c][s][d]);
				if(attendance[c][s][d]==1){sumS+=1;}
				}
			printf("%d\n",sumS);
			sumC+=sumS;
			if(sumS==4){count+=1;}
			if(sumS>highS){
				highS=sumS;
				indS=s+1;
				indSC=c+1;
			}
		}
		if(sumC>highC){
			highC=sumC;
			indC=c+1;
		}
	}
	
	printf("Student %d of class %d has the highest attendance of %d\n",highS,indSC,indS);
	printf("Class %d has highest overall attendance %d",indC,highC);
	return 0;
}
