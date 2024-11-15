//write a c program to ptint table of number to enter by user
// omkar salunkhe

#include<stdio.h>

int main(){

    int number;

    printf("enter a number to print its multification table :");
    scanf("%d", &number);

    printf("multiplication table for %d:\n",number);
    
    for(int i = 1; i<=10; i++)

    {
        printf("%d*%d = %d\n", number, i ,number*i);
    }

    return 0;
}