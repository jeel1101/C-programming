#include<stdio.h>
int main()
{
	int n1,n2,n3,avg;
	
	printf("Enter the three numbers= ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	avg= (n1+n2+n3)/3;
	
	printf("\n\nAverage of %d, %d and %d is %d.",n1,n2,n3,avg);
}