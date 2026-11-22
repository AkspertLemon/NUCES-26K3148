#include <stdio.h>

int main(void) {
	FILE *fpr = fopen("result.txt","w+");
	char stdID[50];
	float obtained,total,per;
	
	printf("Enter Content:\n");
	printf("Student ID:");
	scanf("%s",stdID);
	fprintf(fpr,"%s\n",stdID);
	printf("Obtained:");
	scanf("%f",&obtained);
	fprintf(fpr,"%f\n",obtained);
	printf("Total:");
	scanf("%f",&total);
	fprintf(fpr,"%f\n",total);
	per = (obtained / total ) *100.0f;
	fprintf(fpr,"%f\n",per);
	rewind(fpr);
	fscanf(fpr,"%s",stdID);
	fscanf(fpr,"%f",&obtained);
	fscanf(fpr,"%f",&total);
	fscanf(fpr,"%f",&per);
	printf("\n\nWritten File Content\n");
	printf("Student ID: %s\n",stdID) ;
	printf("Obtained: %.2f\n",obtained);
	printf("Total: %.2f\n",total);
	printf("Percentage: %.2f\n",per);
	fclose(fpr);
	return 0;
}
