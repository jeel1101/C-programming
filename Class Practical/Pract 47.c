#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[500];  
    int count = 0;  
    
    printf("Enter the string: ");
    fgets(string,500,stdin);
    for(int i = 0; i < strlen(string); i++) {  
        if(string[i] != ' ')  
            count++;  
    }  
    printf("\nNumber of characters: %d", count);  
   
    return 0;  
}  
