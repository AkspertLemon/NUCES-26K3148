#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[50];
	printf("Enter name: ");
	gets(name);
	printf("Original Output: %s -- Length: %d\n",name,strlen(name));
	char newName[50];
	
	strcpy(newName,name);
	printf("Output from new variable: %s -- Length: %d\n",newName,strlen(newName));
	strcat(newName," - FAST University");
	printf("Output: %s -- Length: %d\n",newName,strlen(newName));
}
