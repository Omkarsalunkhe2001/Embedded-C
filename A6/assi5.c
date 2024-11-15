//write a c program to take information from user using structures like roll number, name, standard and percentage. print them as well.
//omkar salunkhe

#include<stdio.h>

struct student{
    char name[50];
    int rollnumber;
    int standard;
    float percentage;
    
};

int main(){

    struct student student;

    printf("enter a name:\n");
    scanf("%c", &student.name);

    printf("ener a roll number :\n");
    scanf("%d", &student.rollnumber);

    printf("enter a standard:\n");
    scanf("%d", &student.standard);

    printf("enter a percentage:\n");
    scanf("%f", &student.percentage);



    printf("\n student information: \n");
    printf("roll number :%d\n",student.rollnumber);
    printf("student name :%c\n",student.name);
    printf("standard :%d\n", student.standard);
    printf("percentage :%.2f%%\n",student.percentage);

    return 0;
}