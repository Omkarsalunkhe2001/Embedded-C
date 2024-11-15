//take number and character from user and print character that number of times using while loop
//omkar salunkhe

#include<stdio.h>

int main(){

    int num, i = 0;
    char ch;

    printf("enter a number :");
    scanf("%d", &num);

    printf("enter a character :");
    scanf(" %c", &ch);

    while(i < num){
        printf("%c", ch);
        i++;
    }

    printf("\n");

    return 0;
}