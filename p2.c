
#include<stdio.h>
main(){
	
	int i,no=0;
	
	printf("Enter the no o i:");
	scanf("%d",&i);
	
	do{
		i/=10;
		no++;
	}
	while(i|=0);
	printf("%d",no);
}
