// write a c program to access elements of an array of 10 elements using pointer arthmetic
//omkar salunkhe 

#include<stdio.h>

int main(){

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    int  *ptr = arr;

    printf("Accesing array element using pointer arthmetic :\n");

    for(int i = 0; i < 10; i++){

        printf("elements at index %d: %d\n", i, *(ptr + i));

    }

    return 0;

}