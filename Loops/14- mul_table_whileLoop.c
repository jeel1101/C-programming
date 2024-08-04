#include<stdio.h>
int main()
{
	int num,i=1;
	
	printf("Enter the number you want table= ");
	scanf("%d",&num);
	
	while(i<=10){
		printf("\n%d * %d = %d",num,i,num*i);
		i++;
	}
}