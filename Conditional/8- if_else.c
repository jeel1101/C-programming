 #include<stdio.h>
 int main()
 {
 	int age;
 	
 	printf("Enter your age= ");
 	scanf("%d",&age);
 	
 	if(age>=18){
 		printf("\n\nYou are eligible for vote");
	 }
	 else{
	 	printf("\n\nYou are not eligible for vote");
	 }
 }