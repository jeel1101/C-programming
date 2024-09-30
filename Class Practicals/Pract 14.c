#include<stdio.h>
int main()
{
	int m,s,eng,ss;
	float per;
	
	printf("Enter the marks of Maths, Science, English and SS (1-100): ");
	scanf("%d%d%d%d",&m,&s,&eng,&ss);
	
	per= (m+s+eng+ss)/4;
	
	printf("\n\nPercentage is %.2f%%",per);
	
	if(per>90 && per<=100){
		printf("\n\nYou got A+ grade");
	}
	else if(per>80 && per<=90){
		printf("\n\nYou got A grade");
	}
	else if(per>65 && per<=80){
		printf("\n\nYou got B grade");
	}
	else if(per>33 && per<=65){
		printf("\n\nYou got C grade");
	}
	else{
		printf("\n\nYou are fail....");
	}
	
	return 0;
}
