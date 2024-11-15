//write a c program to show the use of gets and puts function by taking a string from user's end.
//omkar salunkhe

#include<stdio.h>

int main(){

char str[100];

printf("enter a string:");

gets(str);

printf("You entered:");

puts(str);

return 0;

}

