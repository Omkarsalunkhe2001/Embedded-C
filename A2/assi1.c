//write a c program that demonstrate the difference between pre-increment(++x) and post-increment(x++) operators. print the value before and after each operation.
//omkar salunkhe

#include<stdio.h>
 
 int main(){

    int x;

    x = 5;

    // post-increment
    
    printf("initial value of x: %d\n", x);
    printf("value after post-increment: %d\n",x++);
    printf("value of x after post-increment operation: %d\n\n",x);

    // pre-increment

    x = 5;
    printf("initial value of x: %d\n", x);
    printf("value after pre-increment: %d\n", ++x);
    printf("value of x after pre-increment operation: %d\n\n",x);



    return 0;
 }

