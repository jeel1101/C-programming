#include<stdio.h>
int main()
{
	int a=10, b=14, temp;
	
	printf("Before swap a= %d and b= %d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n\nAfter swap a= %d and b= %d",a,b);
	
	return 0;
}
