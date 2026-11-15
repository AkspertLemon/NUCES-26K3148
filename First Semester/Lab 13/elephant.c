#include <stdio.h>
int main(){
	int pos,step=0,i=5;
	scanf("%d",&pos);
	while(i!=0){
		step += pos/i;
		pos = pos%i;
		i--;
	}
	printf("%d",step);
}