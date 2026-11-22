#include <stdio.h>
#include <string.h>
int main(void)
{
	char students[5][50],firstStd[50],ch, *pos;
	int i;
	for(i=0;i<5;i++){
		printf("Enter Student [%d]: ",i+1);
		gets(students[i]);
				
	}
//	printf("%s",students[0]);
	strcpy(firstStd,students[0]);
	printf("\nCopied First Student Name:  [%s]\n",firstStd);
	printf("Enter Character to find: ");
	scanf(" %c",&ch);
	printf("Name\t\tFound\t\tAddress\n");
	for(i=0;i<5;i++){
		pos = strchr(students[i],ch);
		printf("%-16s%-5s\t\t",students[i],(pos!=NULL)?"Yes":"No");
		if(pos!=NULL){printf("%d",pos-students[i]);}
		printf("\n");
				
	}
	return 0;
}