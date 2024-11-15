//write a c program that demonstrate the use of bitwise and AND, OR, and XOR operators. intialise two integer and apply these operater to them, then print the results.
//omkar salunkhe

# include<stdio.h>

int main(){

    int num1 = 10;
    int num2 = 12;

    int andresult = num1 & num2;
    printf("Bitwise AND of %d and %d is: %d\n", num1, num2, andresult);

    int orresult = num1 | num2;
    printf("Bitwise OR of %d and %d is: %d\n", num1, num2, orresult);

    int xorresult = num1 ^ num2;
    printf("Bitwise XOR of %d and %d is: %d\n", num1, num2, xorresult);





    return 0;
}