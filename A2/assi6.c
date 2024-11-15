//write a c program that calculates the maximum of three numbers using the conditional (ternary) operator. the program should handel cases where the numbers are equal.
//omkar salunkhe

#include<stdio.h>

int main(){

    int num1, num2, num3, max;

    printf("enter three numbers :");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 >= num2)?
          ((num1 >= num3)? num1 : num3):
          ((num3 >= num3)? num2 : num3);


    printf("The maximum of the three number is : %d\n", max);

    return 0;
}
