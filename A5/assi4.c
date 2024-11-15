//write a c program to input a number from user and find its factorial with help of functions.
//omkar salunkhe

#include<stdio.h>

long long factorial(int n){
    long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int number;

    printf("enter a number :");
    scanf("%d", &number);

    if(number < 0){
        printf("negative number dosen't exit:");

    }else{

        printf("factorisal of %d = %lld\n", number, factorial(number));

    }

    return 0;
}