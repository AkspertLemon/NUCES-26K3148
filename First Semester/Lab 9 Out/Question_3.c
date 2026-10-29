#include <stdio.h>

int main(void)
{
	int mat1[3][3],mat2[3][3],matans[3][3];
	printf("Enter Matrix 1:\n");
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			scanf("%d",&mat1[j][i]);
		}
	}
	
	printf("Enter Matrix 2:\n");
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			scanf("%d",&mat2[j][i]);
		}
	}
	
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			matans[j][i]=mat1[j][i]+mat2[j][i];
		}
	}
	printf("Matrix Sum Answer:\n");
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			printf("%-2d ",matans[j][i]);
		}
		printf("\n");
	}
	return 0;
}
