//reverse array element
//omkar salunkhe

#include<stdio.h>

void reverseArray(int arr[], int size){
    int temp;

    for(int i=0; i < size / 2; i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;

    }
}

int main(){
    int size;

    printf("enter the size of array :");
    scanf("%d", &size);

    int arr[size];

    printf("enter %d element of the array :\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);

    }

    reverseArray(arr, size);
    printf("reversed array: \n");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);

    }

    return 0;
}