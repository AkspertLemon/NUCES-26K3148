#include <stdio.h>
int main(){
	int temp,total=0,count=0;
	for (int i=1;i<=7;i++){
		printf("Enter Day %d temp: ",i);
		scanf("%d",&temp);
		total = total + temp;
		count += (temp>100) ? 1:0;
	}
	printf("Total temp: %d\nDays with temp greater than 100: %d",total,count);
}
