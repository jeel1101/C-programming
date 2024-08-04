#include<stdio.h>

float sum(float n1, float n2);
float sub(float n1, float n2);
float multi(float n1, float n2);
float div(float n1, float n2);

int main(){
	float n1,n2,result;
	int op;
	
	printf("1. For Addition\n2. For Substraction\n3. For Multiplication\n4. For Division");
	
	printf("\n\nEnter your choice from above list: ");
	scanf("%d",&op);
	printf("\nEnter the two numbers: ");
	scanf("%f%f",&n1,&n2);
	
	switch(op){
		case 1: result= sum(n1,n2);
				printf("\n\nSum of %.1f and %.1f is %.1f",n1,n2,result);break;
				
		case 2: result= sub(n1,n2);
				printf("\n\nSubstraction of %.1f and %.1f is %.1f",n1,n2,result);break;
				
		case 3: result= multi(n1,n2);
				printf("\n\nMultiplication of %.1f and %.1f is %.1f",n1,n2,result);break;
				
		case 4: result= div(n1,n2);
				printf("\n\nDivision of %.1f and %.1f is %.1f",n1,n2,result);break;
		
		default: printf("\n\nError! You entered wrong operand");
	}
}

float sum(float n1, float n2){
	return n1+n2;
}

float sub(float n1, float n2){
	return n1-n2;
}

float multi(float n1, float n2){
	return n1*n2;
}

float div(float n1, float n2){
	if(n2 != 0){
		return n1/n2;
	}
	else{
		printf("\n\nError!!\nDivision by zero");
	}
}