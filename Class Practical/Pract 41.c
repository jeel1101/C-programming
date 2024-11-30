//Multiplication of 1st 10 nums

#include<stdio.h>
int main(){
    int a[10],i,mul=1;
    
    for(i=0;i<10;i++){
        a[i]=i+1;
    }
    for(i=0;i<10;i++){
        mul*=a[i];
    }
    printf("\n\nMultiplication is %d",mul);
  
    return 0;
}
