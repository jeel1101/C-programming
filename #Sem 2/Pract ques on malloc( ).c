#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    
    ptr= (float*)malloc(5*sizeof(float));
    
    printf("Enter the prices of 5 things: ");
    for(int i=0;i<5;i++){
        scanf("%f",&ptr[i]);
    }
    
    printf("\n\nPrices of things:\n");
    for(int i=0;i<5;i++){
        printf("%.2f\n",ptr[i]);
    }
    
    return 0;
}
