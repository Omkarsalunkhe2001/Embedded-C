// write a c program that uses unary operators to increment and decrement a variable. initialise a variable, use both pre-increment and post-increment operators, and print the results.
//omkar salunkhe

#include<stdio.h>

int main(){

    int num = 10;

    printf(" initial value of num : %d\n",num);
    printf("post-increment num++ :%d\n", num++);
    printf("after post-increment num : %d\n", num);

    printf("pre-increment ++num: %d\n", ++num);

    printf("post-decrement num--: %d\n", num--);
    printf("after post-decrement num: %d\n", num);
    

    printf("pre-decrement --num: %d\n", --num);

    return 0;


}