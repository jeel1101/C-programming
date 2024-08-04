#include<stdio.h>
int main(){
	int n;
	
	printf("\nEnter the number= ");
	scanf("%d",&n);
	
	(n>=18) ? printf("\n\nEligible for vote") : printf("\n\nNot eligible for vote");
}