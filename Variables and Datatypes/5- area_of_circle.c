#include<stdio.h>
int main()
{
	float pi= 3.14, radius, AOC;
	
	printf("Enter the radius of circle= ");
	scanf("%f",&radius);
	
	AOC= pi * radius * radius;
	
	printf("\n\nArea of the circle is %.2f",AOC);
}