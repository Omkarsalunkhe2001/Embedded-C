//write a c program to find the lenght of given string without using the strlen function. the string should be input by user.
//omkar salunkhe

#include<stdio.h>

int main(){

    char str[100];
    int lenght = 0;

    printf("enter a string:");
    gets(str);

    while(str[lenght] != '\0'){
        lenght;
    }

    printf("the lenght of the string is : %d\n", lenght);

    return 0;
}