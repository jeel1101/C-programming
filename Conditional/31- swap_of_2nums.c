#include<stdio.h>
int main()
{
	int a,b,temp;
	
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	
	printf("\n\nBefore swap: a= %d and b= %d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n\nAfter swap: a= %d and b= %d",a,b);
}