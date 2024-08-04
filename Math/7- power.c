#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	int power,p;
	
	printf("\n1. Type 2 for square.\n2. Type 3 for cube.");
	
	printf("\n\nEnter the number= ");
	scanf("%f",&a);
	printf("\nChoose the number from the list= ");
	scanf("%d",&power);
	
	p= pow(a,power);
	printf("\n\n%.2f ^ %d is %d",a,power,p);
}