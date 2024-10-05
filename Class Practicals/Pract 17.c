#include<stdio.h>
int main()
{
	float l,w,r;
	const float pi= 3.14;
	int op;
	
	printf("1. Area of Rectangle\n2. Area of Circle\n3. Area of Square");
	printf("\n\nEnter the operation from the list: ");
	scanf("%d",&op);
	
	switch(op){
		case 1: printf("Enter the length and width: ");
				scanf("%f%f",&l,&w);
				printf("\n\nArea of Rectangle: %.2f",l*w);break;
				
		case 2: printf("Enter the radius: ");
				scanf("%f",&r);
				printf("\n\nArea of Circle: %.2f",pi*r*r);break;
				
		case 3: printf("Enter the length: ");
				scanf("%f",&l);
				printf("\n\nArea of Square: %.2f",l*l);break;
	}
	
	return 0;
}
