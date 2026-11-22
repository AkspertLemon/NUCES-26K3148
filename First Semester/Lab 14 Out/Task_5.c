#include <stdio.h>

int main(void) {
	float total,obtained;
	char name[20];
	printf("Enter Name: ");
	scanf("%s",&name);
	printf("Enter obtained marks: ");
	scanf("%f",&obtained);
	printf("Enter total marks: ");
	scanf("%f",&total);
	float percent = (obtained/total)*100.0f;

	FILE *fpr;
	fpr = fopen("Percent.txt","w");
	fprintf(fpr,"%s %.2f",name,percent);
	fclose(fpr);

	fpr = fopen("Percent.txt","r");
	fscanf(fpr,"%s",&name);
	fscanf(fpr,"%f",&percent);
	printf("\n");
	printf("From File:\n");
	printf("Name: %s\n",name);
	printf("Percent: %.2f",percent);
	fclose(fpr);
	return 0;
}
