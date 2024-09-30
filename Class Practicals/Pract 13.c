#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c){
		printf("\n\n%d is max",a);
	}
	else if(b>c && b>a){
		printf("\n\n%d is max",b);
	}
	else{
		printf("\n\n%d is max",c);
	}
	
	return 0;
}
