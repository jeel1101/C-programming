#include<stdio.h>
#include<math.h>

int num(int n);

int main(){
	
	int n,result;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	result= num(n);
	printf("\n\nThe square of %d is %d",n,result);
}

int num(int n){
	return pow(n,2);
}