//write a c program that initialise a variable x to 10. use compound assingment operator to increment x by 5, decrement x by 2, multiply x by 3, and divide x by 4. print the final value of x.
// omkar salunkhe

#include<stdio.h>

int main(){

    int x = 10;

    x+=5;

    x-=2;

    x*=3;

    x/=4;

    printf("The final value of x is:%d\n", x);

    return 0;
}