#include<stdio.h>
int main()
{
	int units;
	float bill;
	
	printf("Enter the units: ");
	scanf("%d",&units);
	
	if(units<=100){
		bill= 100*1.5;
	}
	else if(units<=200){
		bill= 100 * 1.5 + (units-100) * 2.0;
	}
	else if(units<=300){
		bill= 100 * 1.5 + 200 * 2.0 + (units-200) * 2.5;
	}
	else{
		bill = 100 * 1.5 + 200 * 2.0 + 300 * 2.5 + (units-300) * 3.0;
	}
	
	bill += 100;
	
	printf("\n\nYour bill is %.2f",bill);
	
	return 0;
}
