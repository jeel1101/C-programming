#include<stdio.h>
int main()
{
	int ch;
	
	printf("Enter any character or number= ");
	scanf("%c",&ch);
	
	if(ch>= '0' && ch<= '9'){
		printf("\n\n %c is Digit",ch);
	}
	else{
		printf("\n\n %c is not Digit",ch);
	}
}