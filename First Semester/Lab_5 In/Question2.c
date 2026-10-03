#include <stdio.h>
int main()
{
	int x, y;
	printf("Do you have a CNIC?\n1:Yes\n0:No: ");
	scanf("%d", &x);
	if(x==1)
	{
		printf("\nHave you passed the driving test?\n1=Yes\n0= No: ");
		scanf("%d", &y);
		if(y==1)
		{
			printf("\nLicense can be issued");
		}
		else
		{
			printf("\nReattempt and Pass the test");
		}
	}
	else
	{
		printf("\nYou need CNIC");
	}
	
}
