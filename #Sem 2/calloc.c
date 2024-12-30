#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    
    ptr= (float*)calloc(5,sizeof(float));
    
    printf("Elements:\n");
    for(int i=0;i<5;i++){
        printf("%.2f\n",ptr[i]);
    }
    
    return 0;
}
