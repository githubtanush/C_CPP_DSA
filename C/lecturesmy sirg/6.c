//Structure
#include<stdio.h>
struct employee{
    int empid;
    char emp_name[20];
    int salary;
};
int main(){
    struct employee e1;
    printf("Enter the employee name,id and salary : ");
    gets(e1.emp_name);
    scanf("%d %d ",&e1.empid,&e1.salary);
    printf("%s %d %d", e1.emp_name,e1.empid,e1.salary);
    getchar();
    return 0;
}