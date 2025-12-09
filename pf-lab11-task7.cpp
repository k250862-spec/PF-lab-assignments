#include<stdio.h>

int main(){
    struct department{
        char depname[1000];
        int blocknum;
    };
    
    struct student{
        int id;
        char stdname[100];
        float cgpa;
        
        struct department dept;
    };
    
    struct student Student;
    
    printf("enter ID: ");
    scanf("%d" , &Student.id);
    printf("enter student name: \n");
    scanf("%s" , Student.stdname);
    printf("enter CGPA: \n");
    scanf("%f" , &Student.cgpa);
    printf("enter student department: \n");
    scanf("%s" , Student.dept.depname);
    printf("enter department block number: ");
    scanf("%d" , &Student.dept.blocknum);
    
    printf("\n");
    
    printf("ID: %d\n" ,Student.id );
    printf("student name: %s\n" , Student.stdname);
    printf("CGPA: %.2f\n" , Student.cgpa);
    printf("student department name: %s\n" , Student.dept.depname);
    printf("block number: %d\n" , Student.dept.blocknum);
    
    return 0;
}	