//Write a C code to check if bit2 and bit3 are both set. Print whether they are both set or not. 
//omkar salunkhe

#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Mask to check if bit 2 and bit 3 are set (binary mask 1100 or 0xC)
    if ((num & 0xC) == 0xC) {
        printf("Both bit 2 and bit 3 are set.\n");
    } else {
        printf("Both bit 2 and bit 3 are NOT set.\n");
    }

    return 0;
}
