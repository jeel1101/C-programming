#include<stdio.h>
int main(){
	int age= 22;
	int *ptr= &age;
	
	printf("%p",&age); //address
	printf("\n%p",ptr);
	printf("\n%u",ptr);
	printf("\n%u",&ptr);
}