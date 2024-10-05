#include<stdio.h>
int main()
{
	int op;
	float a,b;
	
	printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division");
	printf("\n\nEnter the operation from the list: ");
	scanf("%d",&op);
	
	if(op<=4 && op>=1){
		printf("\nEnter the two numbers: ");
		scanf("%f%f",&a,&b);
	
		switch(op){
			case 1: printf("\n\nAddition of %.0f and %.0f is %.2f",a,b,a+b);break;
			case 2: printf("\n\nSubstraction of %.0f and %.0f is %.2f",a,b,a-b);break;
			case 3: printf("\n\nMultiplication of %.0f and %.0f is %.2f",a,b,a*b);break;
			case 4: printf("\n\nDivision of %.0f and %.0f is %.2f",a,b,a/b);break;
		}
	}
	else{
		printf("\n\nSomething went wrong, try again");
	}
	
	return 0;
}
