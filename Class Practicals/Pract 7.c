#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;
	
	printf("Enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	avg= (a+b+c)/3;
	
	printf("\n\nAverage is %.2f",avg);
	
	return 0;
}
