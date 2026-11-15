#include <stdio.h>
#include <string.h>
int main(void)
{
	char students[5][50],firstStd[50],ch;
	int i, pos;
	for(i=0;i<5;i++){
		printf("Enter Student [%d]: ",i+1);
		gets(students[i]);
				
	}
//	printf("%s",students[0]);
	strcpy(firstStd,students[0]);
	printf("\nCopied First Student Name:  [%s]\n",firstStd);
	printf("Enter Character to find: ");
	scanf("%c",&ch);
	printf("Name\t\tFound\t\tAddress\n");
	for(i=0;i<5;i++){
		pos = strchr(students[i],ch);
		printf("%-4s\t\t%-5s\t\t",students[i],(pos!=0)?"Yes":"No");
		if(pos!=0){printf("%p",pos);}
		printf("\n");
				
	}
	return 0;
}
