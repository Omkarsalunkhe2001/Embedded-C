//write a c program with int, float, double and character data types and print the size of these data types.
//omkar salunkhe

#include<stdio.h>

int main(){

    int intvariable;
    float floatvariable;
    double doublevariable;
    char charvariable;

    printf("size of int variable is: %zu bytes\n",sizeof(int));
    printf("size of float variable is: %zu bytes\n",sizeof(float));
    printf("size of double variable is: %zu bytes\n",sizeof(double));
    printf("size of character variable is: %zu bytes\n",sizeof(char));

    return 0;
}