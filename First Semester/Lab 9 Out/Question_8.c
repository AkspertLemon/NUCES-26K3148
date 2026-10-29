#include <stdio.h>

int main(void)
{
	int marks[2][5][4],total[2][5],secTotal,assignTotal;
	int high,highS;

	for(int i=0;i<2;i++){
		printf("Section %d\n",i+1);
		for(int j=0;j<5;j++){
			printf("Student %d\n",j+1);
			total[i][j]=0;
			for(int k=0;k<4;k++){
				printf("Assignment %d marks: ",k+1);
				scanf("%d",&marks[i][j][k]);
				total[i][j] += marks[i][j][k];
			}
		}
		printf("\n");
	}

	for(int i=0;i<2;i++){
		secTotal=0;
		high=-1;
		highS=0;
		printf("\nSection %d\n",i+1);
		for(int j=0;j<5;j++){
			printf("Student %d Total marks: %d\n",j+1,total[i][j]);
			if(total[i][j]<20){printf("Student %d of Section %d has total below 20\n",j+1,i+1);}
			if(high<total[i][j]){
				high=total[i][j];
				highS=j;
			}
			secTotal += total[i][j];
		}
		for(int k=0;k<4;k++){
			assignTotal=0;
			for(int j=0;j<5;j++){
				assignTotal += marks[i][j][k];
			}
			printf("Assignment %d Average marks: %.2f\n",k+1,assignTotal/5.0f);
		}
		printf("Section %d Total marks: %d\n",i+1,secTotal);
		printf("Highest total: %d (Section %d, Student %d)\n",high,i+1,highS+1);
	}

	return 0;
}
