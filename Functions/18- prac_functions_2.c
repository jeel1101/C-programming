#include<stdio.h>

void namaste();
void bonjour();

int main(){
	char ch;
	printf("Enter i if you are Indian and f for French: ");
	scanf("%c",&ch);
	
	if(ch=='i'){
		namaste();
	}
	else{
		bonjour();
	}
	
	return 0;
}

void namaste(){
	printf("\n\n Namaste");
}

void bonjour(){
	printf("\n\n Bonjour");
}