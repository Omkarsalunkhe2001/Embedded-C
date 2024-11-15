//write a c program that calculates the sum of the first n positive integers using a for loop. The value of n should be input by the user.
//omkar salunkhe

#include<stdio.h>

int main(){

    int n, sum = 0;

    printf("enter a positive interger :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        sum+=i;
    }

    printf("the sum of thr first positive number is :%d", sum);

    return 0;


}