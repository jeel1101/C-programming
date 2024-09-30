#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	
	if(a>b){
		printf("\n\n%d is max",a);
	}
	else{
		printf("\n\n%d is max",b);
	}
	
	return 0;
}
