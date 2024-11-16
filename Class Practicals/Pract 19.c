//sum of odd and even between 51 and 550

#include<stdio.h>
int main()
{
    int i,sum=0;
    
    for(i=51;i<=550;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("Sum of even numbers: %d",sum);
    
    for(i=51;i<=550;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("\n\nSum of odd numbers: %d",sum);
}
