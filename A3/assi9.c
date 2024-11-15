//write a c program thats prints a right angeled tringle pattern of stars(*) with n rows using nested for loops. the number of rows n should be provided by the user
// omkar salunkhe

#include<stdio.h>
int main(){

    int n, i, j;

    // get the number of rows from the user

    printf("enter the number of rows for the tringle :");
    scanf("%d", &n);

    // outer loop for rows
    for(i = 1; i <= n; i++){

        // inner loop for printing stars

        for(j = 1; j <= i; j++){

            printf("*");

        }
        // move to the next line after each row
        printf("\n");
        
    } 

    return 0;
}