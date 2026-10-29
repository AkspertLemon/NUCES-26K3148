#include <stdio.h>

int main(void)
{
	int sMarks[4][2],m,f;
	int highM=-1,highF=-1,lowM=999,lowF=999;
	float avgM=0.0f,avgF=0.0f;
	
	for(int i=0;i<4;i++){
		printf("Student %d\n",i+1);
		printf("Mid: ");
		scanf("%d",&m);
		printf("Final: ");
		scanf("%d",&f);
		sMarks[i][0]=m;
		sMarks[i][1]=f;
		if(highM<m){highM=m;}
		if(highF<f){highF=f;}
		if(lowM>m){lowM=m;}
		if(lowF>f){lowF=f;}
		avgM += m;
		avgF += f;
		printf("\n");
	}
	for(int i=0;i<4;i++){
		printf("\nStudent %d Total marks: %d",i+1,sMarks[i][0]+sMarks[i][1]);
	}
	printf("\n");
	printf("Highest Mid marks: %d\n",highM);
	printf("Highest Final marks: %d\n",highF);
	printf("Lowest Mid marks: %d\n",lowM);
	printf("Lowest Final marks: %d\n",lowF);
	printf("Average Mid marks: %.2f\n",avgM/4.0f);
	printf("Average Final marks: %.2f\n",avgF/4.0f);
	
	return 0;
}
