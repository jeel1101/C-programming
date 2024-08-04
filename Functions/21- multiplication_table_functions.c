#include<stdio.h>

void printTable(int i, int n);

int main(){
	int n,i;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printTable(i,n);
	}
}

void printTable(int i, int n){
	printf("\n%d * %d = %d",n,i,n*i);
}