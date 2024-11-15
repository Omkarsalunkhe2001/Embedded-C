//write a menu driven program to perform basic arthmatic operations. 
//menu options _ 0 to exit, 1 to add, 2 to subtract, 3 ro multiply, 4 to divide.
//dependig uopn the choice intered by user the arthmatic operation should be performed and continue till user.
//omkar salunkhe

#include<stdio.h>

void add(float a, float b){
    printf("result: %.2lf\n", a + b);
}

void subtract(float a, float b){
    printf("result: %.2lf\n", a - b);
}

void mutiply(float a, float b){
    printf("result: %.2lf\n", a * b);
}

void divide(float a, float b){
    if(b != 0){
        printf("result: %.2lf\n", a / b);
    }else{

        printf("error! division by zero.\n");
    }
}

void menu(){
    printf("\n====arthmetic operations menu ====\n");
    printf("0. exit\n");
    printf("1. addition\n");
    printf("2. subtract\n");
    printf("3. multiply\n");
    printf("4. divide\n");
}

int main(){
    int choice;
    float num1, num2;

    do{
        menu();
        printf("enter your choice:");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4){
            printf("enter two numbers :");
            scanf("%f %f, &num1, &num2");
        }

        switch (choice){
        case 0:
        printf("Existing..\n");
        break;

        case 1:
        add(num1, num2);
        break;

        case 2:
        subtract(num1, num2);
        break;

        case 3:
        multiply(num1, num2);
        break;

        case 4:
        divide(num1, num2);
        break;

        default:
        printf("invalide choice!\n");

    }

    }while (choice != 0);

    return 0;

    



    
}
