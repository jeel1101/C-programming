#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,root1,root2,D,realPart,imagPart;
	
	printf("Enter a,b and c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	D= (b*b) - 4*a*c;
	
	if(D>0){
		root1= (-b + sqrt(D) / (2*a));
		root2= (-b - sqrt(D) / (2*a));
		printf("\n\nRoot1= %.1lf and Root2= %.1lf",root1,root2);
	}
	else if(D==0){
		root1=root2= -b / (2*a);
		printf("\n\nRoot1 and Root2 is: %.1lf",root1);
	}
	else{
		realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("root1 = %.1lf+%.1lfi and root2 = %.1f-%.1fi", realPart, imagPart, realPart, imagPart);
	}
}