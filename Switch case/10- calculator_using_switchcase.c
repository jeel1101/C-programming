#include<stdio.h>
int main()
{
	int op,n1,n2;
	
	printf("1. For Addition\n2. For Substraction\n3. For Multiplication\n4. For Division\n5. Modulo");
	
	printf("\n\nSelect any expression from above list= ");
	scanf("%d",&op);
	
	printf("\nEnter the two numbers= ");
	scanf("%d%d",&n1,&n2);
	
	switch(op){
		case 1: printf("\n\nSum of %d and %d is %d",n1,n2,n1+n2);break;
		case 2: printf("\n\nSubstrat of %d and %d is %d",n1,n2,n1-n2);break;
		case 3: printf("\n\nMultiplication of %d and %d is %d",n1,n2,n1*n2);break;
		case 4: printf("\n\nDivision of %d and %d is %d",n1,n2,n1/n2);break;
		default: printf("\n\nYou entered special character");
	}
}