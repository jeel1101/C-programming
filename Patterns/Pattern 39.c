//Binary pyramid

#include <stdio.h>

int main() {
    int i,j,n;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(j%2==0){
                printf("%d",0);
            }
            else{
                printf("%d",1);
            }
        }
        printf("\n");
    }

    return 0;
}
