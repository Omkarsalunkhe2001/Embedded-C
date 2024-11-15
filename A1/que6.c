//write a c program demonstrates the concept of variable scope by using local and global variables. show how changes to a globle variable affect the output in different functions.
//omkar salunkhe


#include<stdio.h>

int globalvariable = 10;

int main(){
int localvariable = 20;

printf("%d",globalvariable);
printf("%d\n",localvariable);
    

    return 0;
}