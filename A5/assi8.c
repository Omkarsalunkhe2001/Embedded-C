//write a c program to get a string from user through keyboard uding getchar function.
//omkar salunkhe
#include<stdio.h>

int main(){
    char str[100];
    char ch;
    int i = 0;

    printf("enter a string:");

    while((ch = getchar()) != '\n' && i < 99){

        str[i] = ch;
        i++;
    }

    str[i] = '\0';
    printf("you entered :%s\n", str);

    return 0;
}