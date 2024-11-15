//write a c proram to calculate the average of n integers stored in an array of integers. the size of the array and the elements should be provided by the user.
//omkar salunkhe

#include<stdio.h>

int main(){

    int n, i;
    float sum = 0.0, average;

    printf("enter the first element :");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d elements :\n",n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        sum += arr[i];

    }

    average = sum / n;

    printf("avarege of the elements :%.2f\n", average);

    return 0;
}