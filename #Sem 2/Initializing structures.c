#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    long int roll_no;
    float cgpa;
};
int main()
{
    struct student s1= {"Jeel",2005,7.5};
    
    printf("Name: %s",s1.name);
    
    return 0;
}
