//write a c program that demonstrates the effects of type casting on arithmatic operations. the program should perform division with both interger and floating point types and show how the results differ.
//omkar salunkhe 

#include<stdio.h>

int main(){

    int num1 = 7;
    int num2 = 2;

    //perform integer division

    int intresult = num1 / num2;
    printf("integer division of %d / %d = %d/n", num1, num2, intresult);

    //perform floating-point division without casting (integer result)

    float floatresultNocast = num1 / num2;
    printf("floating-point division without casting (%d / %d) = %.2f\n", num1, num2, floatresultNocast);

    //perform floating-point division with casting

    float floatresultwithcast = (float)num1 / num2;
    printf("floating-point division with casting ((float)%d / %d) =%.2f\n", num1, num2, floatresultwithcast);

    return 0;


}