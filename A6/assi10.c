#include<stdio.h>

typedef enum {
    ADD,
    SUBTRACT,
    MUITIPLY,
    DIVIDE,

}operation;

int performoperation(int a, int b, operation op);

switch(op){

    case ADD:
    return a + b;
    break;

    case SUBTRACT:
    return a - b;
    break;

    case MULTIPLY:
    return a * b;
    break;

    case DIVIDE:
   
    if(b != 0){
        return a / b;
    }else{
        printf("Error! zero is not divisible");

    }
    default:
    printf("invalide operation.\n");
    return 0;

}

int main(){

    int num1, num2;
    int operation;

    printf("enter two integer:");
    scanf("%d %d", &num1, &num2);

    printf("choose an operation (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY, 3 for DIVIDE):");

    int result = performoperation(num1, num2, (operation)operation);

    printf("result:%d\n", result);


    return 0;
    

    
}