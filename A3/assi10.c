//write a c program to inpute data like: num1, num2 and arthgmetic operations.
//omkar salunkhe

#include<stdio.h>

int main(){

    int num1, num2, result; 
    char operation;

    printf("enter the first number :");
    scanf("%lf",&num1);

    printf("enter the second number :");
    scanf("%lf",&num2);

    printf("enter an arthmatic operation (+, -, *, /):");
    scanf(" %c",&operation);

    switch(operation){
        case'+':
        result = num1 + num2;
        printf("result: %.2lf\n", result);
        break;

        case'-':
        result = num1 - num2;
        printf("result: %.2lf\n", result);
        break;

        case'*':
        result = num1 * num2;
        printf("result: %.2lf\n", result);
        break;

        case'/':
        if(num2 != 0){
            result = num1 / num2;
            printf("result: %.2lf\n", result);
        }else{
            printf("error! division by zero is not valid.\n");
        }
        break;

        default:
        printf("error! invalid operation.\n");
        
        
    }


    return 0;
}