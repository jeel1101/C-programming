#include<stdio.h>
#include<string.h>

struct student{
    char firstname[20];
    char lastname[20];
    int roll_no;
    float per;
}st;
int main()
{
    printf("Enter your first name, last name, roll num and percentage: ");
    scanf("%s%s%d%f",&st.firstname,&st.lastname,&st.roll_no,&st.per);
    
    printf("\n\n--------------------------------------------------");
    printf("\n\t\t\t\t\t\tResult");
    printf("\n--------------------------------------------------");
    printf("\n\n Your name:\t\t\t\t\t\t\t%s %s",st.firstname,st.lastname);
    printf("\n Your roll.no:\t\t\t\t\t\t%d",st.roll_no);
    printf("\n Your percentage:\t\t\t\t\t%.2f%%",st.per);
    
    return 0;
}
