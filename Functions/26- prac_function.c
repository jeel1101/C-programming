#include<stdio.h>

void printHot();
void printCold();

int main(){
	float temp;
	
	printf("Enter the temperature in Celcius: ");
	scanf("%f",&temp);
	
	if(temp>32){
		printHot();
	}
	else{
		printCold();
	}
	
	return 0;
}

void printHot(){
	printf("\n\nHot weather");
}

void printCold(){
	printf("\n\nCold weather");
}