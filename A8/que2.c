//Write a c program to print the maximum number among 2 using macro-MAX.
//omkar salunkhe

#include<stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))  //Macro to find the maximum of two numbers

int main(){

    int num1, num2, maximum;

    printf("Enter a two numbers :");
    scanf("%d %d",&num1,&num2);

    maximum = MAX(num1, num2);

    printf("The maximum number is :%d\n",maximum);

    return 0;
}