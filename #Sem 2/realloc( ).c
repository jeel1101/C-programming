#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n;
    
    printf("Enter the size of array you want to create: ");
    scanf("%d",&n);
    
    ptr= (int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("\nEnter %d element: ",i);
        scanf("%d",&ptr[i]);
    }
    
    printf("\n\n");
    for(int i=0;i<n;i++){
        printf("Element at index %d is %d\n",i,ptr[i]);
    }
    
    printf("\n\nEnter the new size of array you want to create: ");
    scanf("%d",&n);
    
    ptr= (int*)realloc(ptr,n * sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("\nEnter %d element: ",i);
        scanf("%d",&ptr[i]);
    }
    
    printf("\n\n");
    for(int i=0;i<n;i++){
        printf("Element at index %d is %d\n",i,ptr[i]);
    }
    
    return 0;
}
