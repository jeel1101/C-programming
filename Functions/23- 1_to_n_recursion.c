#include<stdio.h>

int sum(int n);

int main(){
	int n;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	printf("\n\nSum of 1 to %d is %d",n,sum(n));
}

int sum(int n){
	if(n==1){
		return 1;
	}
	
	int sumNm1= sum(n-1); //Sum of 1 to n
	int sumN= sumNm1 + n;
	return sumN;
}