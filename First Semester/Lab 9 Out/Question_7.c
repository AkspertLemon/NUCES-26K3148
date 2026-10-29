#include <stdio.h>

int main(void)
{
	int salary[3][4][3],empTotal,deptTotal;
	int highS=-1,highD=0,highE=0,highM=0;

	for(int i=0;i<3;i++){
		printf("Department %d\n",i+1);
		for(int j=0;j<4;j++){
			printf("Employee %d\n",j+1);
			for(int k=0;k<3;k++){
				printf("Month %d salary: ",k+1);
				scanf("%d",&salary[i][j][k]);
				if(highS<salary[i][j][k]){
					highS=salary[i][j][k];
					highD=i;
					highE=j;
					highM=k;
				}
			}
		}
		printf("\n");
	}

	for(int i=0;i<3;i++){
		deptTotal=0;
		printf("\nDepartment %d\n",i+1);
		for(int j=0;j<4;j++){
			empTotal=0;
			for(int k=0;k<3;k++){
				empTotal += salary[i][j][k];
			}
			printf("Employee %d Total salary: %d\n",j+1,empTotal);
			deptTotal += empTotal;
		}
		printf("Department %d Total salary: %d\n",i+1,deptTotal);
		printf("Department %d Average monthly salary: %.2f\n",i+1,deptTotal/3.0f);
	}
	printf("\n");
	printf("Highest salary: %d (Department %d, Employee %d, Month %d)\n",highS,highD+1,highE+1,highM+1);

	return 0;
}
