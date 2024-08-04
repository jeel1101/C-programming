#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number= ");
	scanf("%d",&num);
	
	if(num>=1){
		printf("\n\n%d is a natural number",num);
	}
	else{
		printf("\n\n%d is not a natural number",num);
	}
}