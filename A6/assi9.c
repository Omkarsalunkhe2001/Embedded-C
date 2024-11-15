//write a c program that defines an enum operation with values ADD, SUBTRACT, MULTIPLY and DIVIDE. write a function perforn operation that takes two integers and 
//the operation enum value, performs the corresponding operation, and return the result. demonstrate this function in your main function.
//omkar salunkhe

#include<stdio.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
}operation;

int performoperation(int a, int b, enum operation operation);
int result;

switch(operation){

    case ADD:
    result = a + b;
    break;

    case SUBTRACT:
    result = a - b;
    break;

    case MULTIPLY:
    result = a * b:
    break;

    case DIVIDE:

    result = a / b;
    if(b != 0){
       
    }else{
        printf("error!");
    
    }

    default:
    printf("operation is not found");

     
     return result;

}

    int main(){

        int num1, num2, num3, result;
        enum operation operation;

        printf("enter two enteger:");
        scanf("%d", (int*)&operation);

        result = performoperation(num1, num2, operation);

        if(operation >= 0 && operation <= 3){
            printf("result:%d\n",result);

        }

        return 0;

        
    }
