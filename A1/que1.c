//write a c program to define int, float, string, and character value and print them to console.
//omkar salunkhe

#include<stdio.h>

int main(){

int integervalue = 10;
float floatvalue = 4.32;
char charvalue = 'A';
char stringvalue[] = "hello,world!";

printf("integer value: %d\n", integervalue);

printf("float value: %2f\n", floatvalue);

printf("character value: %c\n", charvalue);

printf("string value: %s \n",stringvalue);

return 0;
}