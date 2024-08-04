#include<stdio.h>
int main()
{
	int num, i=1;
	
	printf("Enter the number= ");
	scanf("%d",&num);
	
	do{
		printf("\n %d",i);
		i++;
	}while(i<=num);
}