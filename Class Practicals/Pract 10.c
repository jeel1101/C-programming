#include<stdio.h>
int main()
{
	int a=10, b=14;
	
	printf("Before swap a= %d and b= %d",a,b);
	
	a= a+b;
	b= a-b;
	a= a-b;
	
	printf("\n\nAfter swap a= %d and b= %d",a,b);
	
	return 0;
}
