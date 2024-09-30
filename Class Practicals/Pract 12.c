#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("\n\n%d is max",a);
		}
		else{
			printf("\n\n%d is max",c);
		}
	}
	else{
		printf("\n\n%d is max",b);
	}
	
	return 0;
}
