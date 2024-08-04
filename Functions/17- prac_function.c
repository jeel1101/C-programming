#include<stdio.h>

void Hello();
void gBye();

int main(){
	Hello();
	gBye();
	return 0;
}

void Hello(){
	printf("Hello");
}

void gBye(){
	printf("\n\nGood Bye");
}