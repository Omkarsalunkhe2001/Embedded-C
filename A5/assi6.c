//write a c programing to swap two integer variables using pointers and functions.
//omkar salunkhe

 #include<stdio.h>

 void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

 }

 void callswap(void(*swapfunc)(int*, int*), int *x, int *y){
    swapfunc(x, y);

 }

 int main(){
    int num1 = 10, num2 = 20;

    printf("before swap: num1 = %d, num2 = %d\n", num1, num2);

    callswap(swap, &num1, num2);

    printf("after swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
 }
