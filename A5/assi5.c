//write a program to swap two integer variables using functions.
//omkar salunkhe

#include<stdio.h>

void swap(int *a, int *b){
int  temp;
temp = *a;
*a = *b;
*b = temp;
}

int main(){
    int num1, num2;

    printf("enter the first integer :");
    scanf("%d", &num1);

    printf("enter the second integer :");
    scanf("%d", &num2);

    printf("before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("after the swap : num = %d, num = %d\n", num1, num2);

    return 0;
}


