#include <stdio.h>
#include <string.h>
int main(void)
{
	char sentence[50],ch;
	printf("Enter sentence: ");
	gets(sentence);
	printf("Enter character: ");
	scanf("%c",&ch);
	int i=strchr(sentence,ch);
	printf("Found at %p",i);
	printf("\n");
	printf("Char\tAddress\n");
	for(int j=0;sentence[j]!='\0';j++){
		printf("%-4c\t%p\n",sentence[j],&sentence[j]);
	}
	int newSent[50];
	strcpy(newSent,sentence);
	printf("Copied Sentence: %s",newSent);
	return 0;
}
