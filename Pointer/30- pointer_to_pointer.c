#include<stdio.h>
int main()
{
	int i= 6;
	int *ptr= &i;
	int **pptr= &ptr;
	
	printf("\nThe number is %d",**pptr);
}