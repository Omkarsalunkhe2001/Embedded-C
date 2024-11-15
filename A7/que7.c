//Write a C program to perform bitwise left and right shift operations. 
//omkar salunkhe

#include <stdio.h>

int main() {
    unsigned int num, leftShiftResult, rightShiftResult;
    int shiftAmount;

    // Input the number and shift amount
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter the number of positions to shift: ");
    scanf("%d", &shiftAmount);

    // Perform the left shift operation
    leftShiftResult = num << shiftAmount;
    // Perform the right shift operation
    rightShiftResult = num >> shiftAmount;

    // Print the results
    printf("Original number: %u\n", num);
    printf("Left shift by %d positions: %u\n", shiftAmount, leftShiftResult);
    printf("Right shift by %d positions: %u\n", shiftAmount, rightShiftResult);

    return 0;
}
