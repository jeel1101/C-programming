#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter the year: ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("\n\nIt is a leap year.");
	}
	else{
		printf("\n\nIt is not leap year.");
	}
}