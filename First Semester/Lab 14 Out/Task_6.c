#include <stdio.h>

int main(void)
{
	int accId[2];
	float transaction[2];
	FILE *fpr;
	printf("Write mode\n");
	printf("Enter Account ID: ");
	scanf("%d",&accId[0]);
	printf("Enter transaction amount: ");
	scanf("%f",&transaction[0]);
	fpr = fopen("bank.txt","w");  //write
	if(fpr==NULL){printf("File not opened");} 
	fprintf(fpr,"%d %f\n",accId[0],transaction[0]);
	fclose(fpr);
	
	fpr = fopen("bank.txt","a"); //append
	if(fpr==NULL){printf("File not opened");}  
	printf("\nAppend mode\n");
	printf("Enter Account ID: ");
	scanf("%d",&accId[1]);
	printf("Enter transaction amount: ");
	scanf("%f",&transaction[1]);
	fprintf(fpr,"%d %f\n",accId[1],transaction[1]);
	fclose(fpr);
	
	fpr = fopen("bank.txt","r");  //read
	printf("\nRead mode\n");
	if(fpr==NULL){printf("File not opened");}
	fscanf(fpr,"%d %f",&accId[0],&transaction[0]);
	printf("%d %f\n",accId[0],transaction[0]);
	
	fscanf(fpr,"%d %f",&accId[1],&transaction[1]);
	printf("%d %f",accId[1],transaction[1]);
	fclose(fpr);
	return 0;
}
