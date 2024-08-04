#include<stdio.h>
int main()
{
	int n1,n2;
	
	printf("Enter the first number= ");
	scanf("%d",&n1);
	printf("\nEnter the second number= ");
	scanf("%d",&n2);
	
	if(n1<n2){
		printf("\n\n%d is smallest number.",n1);
	}
	else{
		printf("\n\n%d is smallest number.",n2);
	}
}