#include<stdio.h>
#include<math.h>

float squareR(float n);

int main(){
	float n;
	printf("Enter the number: ");
	scanf("%f",&n);
	
	printf("\n\nSquareroot of %.1f is %.1f",n,squareR(n));
	return 0;
}

float squareR(float n){
	return sqrt(n);
}