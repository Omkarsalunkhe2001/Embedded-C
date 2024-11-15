//write a c program to check maximum and minimum number. The number should be entered by user.
//omkar salunkhe

#include<stdio.h>

int main(){

    int num1 , num2;
    int max;
    int min;

    printf("enter a first number :");
    scanf("%d", &num1);

    printf("enter a second number :");
    scanf("%d", &num2);

    if(num1>num2)
    {
        max = num1;
        min = num2;
    } else{

        max = num2;
        min = num1;
    }

     printf("max number is :%d\n", max);
     printf("min number is :%d\n", min);





    return 0;
}