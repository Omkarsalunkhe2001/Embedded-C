// write a c program to print the multiplication table for a number up to 10 using nested for loops. the number should be input by the user.
//omkar salunkhe

#include<stdio.h>
int main(){

    int num, i ,j;

    //input from user 
    printf("enter a number to print its multiplication table :");
    scanf("%d", &num);

    //outer loop to print the table up to 10

    for(i=1; i<=10; i++){

        //nested loop for formatting the output
        for(j = 1; j <= 1; j++){

            printf("%d * %d = %d\n", num, i, num * i);
        }
    }

    return 0;
}