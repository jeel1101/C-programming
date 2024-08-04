#include<stdio.h>
int main()
{
	float length,equ;
	
	printf("Enter the length of a square= ");
	scanf("%f",&length);
	
	equ= length * length;
	
	printf("\n\nThe area of a square is %.2f",equ);
}