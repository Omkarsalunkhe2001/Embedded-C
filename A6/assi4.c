//Define a structure cource with members courseName (string of 20 character) and credit (integer). Define another structure student with name (string of 50 characters),
//age(integer). and an array of cource structures. write a function to print the details of a student including all the cources they are inrilled in.
//omkar salunkhe

#include<stdio.h>
#include<string.h>

#define MAX_COURCES 5
#define MAX_COURCE_NAME 10
#define MAX_COURCE 50

//structure to represent a cource 
struct cource{
    char courseName[10];
    int credits;

};

//structure to represent a name

struct student{
    char studentName[50];
    int age;
    struct cource cources[50];
    int courcecount;

};

void printStudenteDetails(struct student student1){
    strcpy(student1.studentName, "omkar salunkhe");
    printf("student age :%s\n", student1.age);

    printf("cource enrolled :\n");
    for(int i = 0; i < student1.courcecount; i++){
        printf("cource %d:\n", i + 1);
        printf("name :%s\n", student1.cources[i].courseName);
        printf("credits : %d\n", student1.cources[i].credits);

    
    }

}

int main(){
    struct student student1;

    snprintf(student1.studentName, sizeof(student1.studentName),"omkar salunkhe");
    student1.age = 23;
    student1.courcecount = 2;

    snprintf(student1.cources[0].courseName, sizeof(student1.cources[0].courseName), "mathematics");
    student1.cources[0].credits = 3;

    snprintf(student1.cources[1].courseName, sizeof(student1.cources[1].courseName),"physics");
    student1.cources[0].credits = 4;


    printStudenteDetails(student1);

    return 0;
}






