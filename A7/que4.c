//Write function to initialize and print details of an employee and a manager. Demonstrate the use of these functions in main.
//omkar salunkhe

#include<stdio.h>

struct Employee{
    int empID;
    char name[50];
    float salary;

};

struct manager{
    struct Employee emp;
    char department[50];
    float salary;

};

void xEmployee(struct Employee * a){
    printf("Enter employee ID:");
    scanf("%d", &a->empID);

    printf("enter employee name:");
    scanf("%s", &a->name);

    printf("enter employee salary :");
    scanf("%f", &a->salary);
}

void yManager(struct manager *m){
    printf("Enter Manager ID:");
    scanf("%d", &m->emp.empID);

    printf("Enter Manager Name:");
    scanf("%s", &m->emp.name);

    printf("Enter Manager salary:");
    scanf("%f", &m->emp.salary);

    printf("Enter Department:");
    scanf("%s", &m->department);

}

void printEmployee(const struct Employee *e){
    printf("\nemployee Details:\n");
    printf("ID: %d\n", e->empID);
    printf("Name :%s\n", e->name);
    printf("salary: %.2lf", e->salary);

}

void printManager(const struct manager *m){
    printf("\nManager details\n");
    printf("ID: %d\n", m->emp.empID);
    printf("Name: %s\n", m->emp.name);
    printf("salary: %2f\n", m->emp.salary);
    printf("Department: %s\n", m->department);

}

int main(){
    struct Employee e;
    struct manager m;

    printf("Initialize employee:\n");
    xEmployee(&e);

    printf("\nInitialize manager:\n");
    yManager(&m);

    printEmployee(&e);
    printManager(&m);

    return 0; 
}