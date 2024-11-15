//write a c program to find the largest and smallest elements in an array of integer. the size of the array and the elements should be input by the user.
//omkar salunkhe

#include<stdio.h>
int main(){

    int n, i;
    int largest, smallest;
    printf("enter the size of the array :");
    scanf("%d", &n);
    
    int arr[n];

    printf("enter %d elements :\n",n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for(i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("largest element : %d\n", largest);
    printf("smaleest element : %d\n", smallest);

    return 0;
}