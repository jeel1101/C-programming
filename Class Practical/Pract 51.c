#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int divi(int a, int b){
    return a/b;
}
int main()
{
    int n1,n2;
    char op;
    
    printf("Enter +,-,* or /: ");
    scanf("%c",&op);
    printf("\nEnter the two numbers: ");
    scanf("%d%d",&n1,&n2);
    switch(op){
        case '+': printf("\nSum is %d",sum(n1,n2));break;
        case '-': printf("\nSub is %d",sub(n1,n2));break;
        case '*': printf("\nMul is %d",mul(n1,n2));break;
        case '/': printf("\nDiv is %d",divi(n1,n2));break;
    }
}
