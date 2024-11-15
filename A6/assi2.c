//define a structure person with the members name (string of 50 characters) and age (integer) write a program to initialise a person structure with our own details and then print the name and age of the person
//omkar salunkhe

#include<stdio.h>
#include<string.h>

typedef struct{

    char name[50];
    int age;

}person;

void printperson(person a){
    printf("name: %s\n", a.name);
    printf("age: %d\n", a.age);

}

int main(){
    person myperson;

    strcpy(myperson.name, "Omkar");
    myperson.age = 22;

    printperson(myperson);

    return 0;
} 