#include<stdio.h>
int main()
{
	float l,w,r;
	const float pi=3.14;
	
	printf("Enter the length, width and radius: ");
	scanf("%f%f%f",&l,&w,&r);
	
	printf("\n\nArea of rectangle is %.2f",l*w);
	printf("\n\nArea of circle is %.2f",pi*r*r);
	
	return 0;
}
