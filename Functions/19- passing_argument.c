#include<stdio.h>

int sum(int a, int b);

int main(){
	int a,b;
	
	printf("Enter the two number= ");
	scanf("%d%d",&a,&b);
	int s= sum(a,b);
	
	printf("\n\nSum of %d and %d is %d",a,b,s);
	return 0;
}

int sum(int a, int b){
	return a+b;
}