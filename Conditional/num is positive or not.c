#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	if(num>=0){
		printf("\n\n%d is positive number",num);
	}
	else{
		printf("\n\n%d is negative number",num);
	}
}