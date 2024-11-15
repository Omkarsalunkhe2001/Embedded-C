//write a c program to a input two numbers from a user and add them. use different functions for different functionalities.
//omkar salunkhe

#include<stdio.h>
 
// function prototype
void getinput(int *a, int *b);
int add(int a, int b);
void displayresult(int sum);

int main(){
    int num1, num2, num3, sum;

    // get input from user 

    getinput(&num1, &num2);

    sum = add(num1, num2);

    displayresult(sum);

    return 0;
}

// function to get input from the user
void getinput(int *a, int *b){

    printf("enter the first number :");
    scanf("%d", a);

    printf("enter the second number :");
    scanf("%d", b);
}

//function to add two numbers
int add(int a, int b){

    return a + b;
    
}

//function to display the result
void displayresult(int sum){
    printf("the sum is :%d\n", sum);

}