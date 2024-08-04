#include<stdio.h>
int main()
{
	float len,bre;
	
	printf("Enter the length and breath= ");
	scanf("%f%f",&len,&bre);
	
	printf("\n\nPerimeter of rectangle is %.2f", 2*(len+bre));
}