//Hollow diamond pyramid

#include <stdio.h>

int main() {
    int n,i,j;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("\t");
            if(i==1 || i==n || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
