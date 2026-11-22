#include <stdio.h>

int main(void) {
	FILE *fpr = fopen("marks.txt","r+");
	char name[50];
	float obtained,total;
	fscanf(fpr,"%s",name);
	fscanf(fpr,"%f",&obtained);
	fscanf(fpr,"%f",&total);
	printf("Current File Content\n");
	printf("Name: %s\n",name) ;
	printf("Obtained: %.2f\n",obtained);
	printf("Total: %.2f\n",total);
	rewind(fpr);
	
	printf("Enter New Content:\n");
	printf("Name:");
	scanf("%s",name);
	fprintf(fpr,"%s\n",name);
	printf("Obtained:");
	scanf("%f",&obtained);
	fprintf(fpr,"%f\n",obtained);
	printf("Total:");
	scanf("%f",&total);
	fprintf(fpr,"%f\n",total);
	fclose(fpr);
	
	fpr = fopen("marks.txt","r");
	fscanf(fpr,"%s",name);
	fscanf(fpr,"%f",&obtained);
	fscanf(fpr,"%f",&total);
	printf("\n\nNew File Content\n");
	printf("Name: %s\n",name) ;
	printf("Obtained: %.2f\n",obtained);
	printf("Total: %.2f\n",total);
	fclose(fpr);
	return 0;
}
