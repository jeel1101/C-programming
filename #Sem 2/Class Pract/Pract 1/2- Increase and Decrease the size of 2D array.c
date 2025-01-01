#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **arr;
    int r,c,newR,newC;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    
    arr= (int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;i++){
        arr[i] = (int*)malloc(c*sizeof(int));
    }
    
    printf("Enter the elements: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\n2D matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the new rows and columns: ");
    scanf("%d%d",&newR,&newC);
    
    arr= (int**)realloc(arr,newR*sizeof(int*));
    for(int i=0;i<r;i++){
        arr[i] = (int*)realloc(arr[i],newC*sizeof(int));
    }
    
    if(newR>r){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=0;
            }
        }
    }
    if(newC>c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=0;
            }
        }
    }
    printf("\n\nNew 2D array: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}