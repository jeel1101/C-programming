#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    long int roll_no;
    float cgpa;
};
int main()
{
    struct student cse[100];
    
    strcpy(cse[0].name,"Jeel");
    cse[0].roll_no= 2403051050462;
    cse[0].cgpa= 9.2;
    
    printf("Name: %s\nRoll no: %ld\nCgpa: %.2f",cse[0].name,cse[0].roll_no,cse[0].cgpa);
    
    return 0;
}
