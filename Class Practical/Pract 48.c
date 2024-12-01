#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[500];  
    int c;  
    
    printf("Enter the string: ");
    fgets(string,500,stdin);
    
    c= strlen(string);
    
    printf("\nLength of string: %d",c);
   
    return 0;  
}  
