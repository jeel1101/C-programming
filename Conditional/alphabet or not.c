#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the character: ");
	scanf("%c",&ch);
	
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
		printf("\n\n%c is character",ch);
	}
	else{
		printf("\n\n%c is not character",ch);
	}
}