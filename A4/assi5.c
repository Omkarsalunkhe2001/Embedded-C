//write a c program to input a single character from user also printing on screen.(use getchar and putchar function)
//omkar salunkhe

#include<stdio.h>

int main(){

    char ch;

    printf("enter a  character:");
    
    ch = getchar();

    printf("You enterde:");

    putchar(ch);

    return 0;
}