#include<stdio.h>
int main()
{
	int marks[3];
	
	printf("Enter the marks of physics: ");
	scanf("%d",&marks[0]);
	
	printf("\nEnter the marks of chemistry: ");
	scanf("%d",&marks[1]);
	
	printf("\nEnter the marks of Maths: ");
	scanf("%d",&marks[2]);
	
	printf("\n\nPhysics= %d, Chemistry= %d and Maths= %d",marks[0],marks[1],marks[2]);
}