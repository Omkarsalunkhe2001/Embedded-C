//write a c program to compute the factorial of the given positive integer using a for loop.
//omkar salunkhe

#include<stdio.h>

int main(){

    int n, i;
    unsigned long long factorial = 1;

    printf("enter a positive integer :");
    scanf("%d",&n);

    if(n < 0){

        printf("factorial of a negative number doesnt exist.\n");

    }else {

        for(i = 1; i<=n; ++i){

            factorial *= i;
        }
        printf("factorial of %d = %llu\n", n, factorial);

    }

    return 0;
}