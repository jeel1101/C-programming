#include<stdio.h>
int main()
{
	int math,phy,chem,eng;
	float per;
	
	printf("Enter the marks of Maths, Physics, Chemistry and English in sequence (range 0-100): ");
	scanf("%d%d%d%d",&math,&phy,&chem,&eng);
	
	per= (math+phy+chem+eng)/4;
	
	printf("\n\nYou got %.2f%%",per);
	
	if(per>90 && per<=100){
		printf("\n\nCongo...You got A+ grade");
	}
	else if(per>75 && per<=90){
		printf("\n\nCongo...You got A grade");
	}
	else if(per>50 && per<=75){
		printf("\n\nCongo...You got B grade");
	}
	else if(per>33 && per<=50){
		printf("\n\nCongo...You got C grade");
	}
	else{
		printf("\n\nSorry..You're fail");
	}
	
	return 0;
}
