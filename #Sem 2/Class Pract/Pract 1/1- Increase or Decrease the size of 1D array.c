#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    ptr= (int*)malloc(n*sizeof(int));
    
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("\n\nElements is: ");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    
    int* arr;
    int newSize;
    
    printf("\n\nEnter the new size of array: ");
    scanf("%d",&newSize);
    
    arr= (int*)realloc(arr,newSize*sizeof(int));
    
    if(newSize>n || newSize<n){
        printf("\nEnter the new elements: ");
        for(int i=0;i<newSize;i++){
            scanf("%d",&arr[i]);
        }
        free(ptr);
    }
    printf("\n\nNew array elements: \n");
    for(int i=0;i<newSize;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}