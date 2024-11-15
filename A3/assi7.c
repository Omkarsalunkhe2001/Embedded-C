//  write a c program that reverses a given integer using a do-while loop
//omkar salunkhe

#include<stdio.h>
int main(){

    int num, reversedNum = 0, remainder;

    //asking to user input the interger
    printf("enter an integer :");
    scanf("%d", &num);

    //do while loop to reveres the integer

    do{
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;

    } while (num != 0);

    printf("reversed number : %d\n", reversedNum);

    return 0;
}