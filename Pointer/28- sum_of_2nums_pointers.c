#include<stdio.h>
int main()
{
	int a,b,sum=0;
	int *p,*q;
	
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	
	p= &a;
	q= &b;
	
	sum= *p + *q;
	
	printf("\n\nThe sum of %d and %d is %d",*p,*q,sum);
}