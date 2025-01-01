#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n;
    
    printf("Enter the size of array you want to create: ");
    scanf("%d",&n);
    
    ptr= (int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("Enter %d element: \n",i);
        scanf("%d",&ptr[i]);
    }
    
    printf("\n\n");
    for(int i=0;i<n;i++){
        printf("Element at index %d is %d\n",i,ptr[i]);
    }
    
    return 0;
}
