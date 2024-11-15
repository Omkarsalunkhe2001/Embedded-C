// write a c program that demonstrates the order of evalution in expression with operators. use parentheses to shoe how operator precedence affect the result.
// omkar salunkhe 

#include<stdio.h>

int main(){

    int a = 5, b = 10, c = 15, result;

    result = a + b * c;
    printf("result of a + b * c without parentheses :%d\n", result);

    result = a + (b * c);
    printf("result of a + (b * c) with parentheses :%d\n", result);

    result = a - b + c;
    printf("result of a - b + c without parentheses :%d\n", result);

    result = (a * b + c) * 2;
    printf("result of (a * b + c) * 2 with parentheses :%d\n", result);

    return 0;

}