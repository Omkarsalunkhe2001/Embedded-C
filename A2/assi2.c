//write a c program for calculator with basic operation.
//omkar salunkhe

#include<stdio.h>
int main(){

    char operator;
    double num1, num2, result;

    printf("enter an operator (+,-, *,/):");
    scanf("%c",&operator);

    printf("enter two numbers:");
    scanf("%lf %lf", &num1,&num2);

    switch(operator){

        case'+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf/n", num1, num2, result);
                break;

        case'-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf/n", num1, num2, result);
                break;

        case'*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf/n", num1, num2, result);
                break;

        case'/':
                if(num2!= 0){
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf/n", num1, num2, result);

                }else{

                    printf("Error! division bye zero is not allowed \n");
                } 
                break;

                default:

                printf("Error! operator is not correct.\n");

    
    }

    return 0;
}