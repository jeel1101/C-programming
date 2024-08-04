#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter the marks= ");
	scanf("%d",&marks);
	
	if(marks>=90 && marks<=100){
		printf("\n\nCongo!!..You got Distinction.");
	}
	else if(marks>=80 && marks<90){
		printf("\n\nCongo!!..You got A grade.");
	}
	else if(marks>=70 && marks<80){
		printf("\n\nCongo!!..You got B grade.");
	}
	else if(marks>=60 && marks<70){
		printf("\n\nCongo!!..You got C grade.");
	}
	else if(marks>=50 && marks<60){
		printf("\n\nCongo!!..You got D grade.");
	}
	else{
		printf("\n\nSorry, You are fail please try again");
	}
}