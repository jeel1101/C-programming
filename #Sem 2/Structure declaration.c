#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll_no;
    float cgpa;
};
int main()
{
    struct student s1;
    // s1.name= "Jeel";
    strcpy(s1.name,"Jeel Patel");
    s1.roll_no= 34;
    s1.cgpa= 8.7;
    
    printf("Name: %s",s1.name);
    printf("\nRoll no: %d",s1.roll_no);
    printf("\nCgpa: %.1f",s1.cgpa);
    
    return 0;
}
