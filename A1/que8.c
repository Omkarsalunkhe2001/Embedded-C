//write a c program that initialization and local variables with differnt values. print the values to demonstrate how initialization works for each scope.
//omkar salunkhe

#include<stdio.h>

int a = 100;  //global var

int omkar(){

    int local = 50; //locsl var

    printf("inside the local variable : %d\n", local);
    printf("local variable : %d\n",a);

}

int main(){

    int b = 20;

    printf("inside the main function :%d\n", b);
    printf("global variable : %d\n", a);
    omkar();

    return 0;
}