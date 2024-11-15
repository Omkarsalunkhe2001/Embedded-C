//take number and character from user and print character that number of times using recursion.
//omkar salunkhe

#include<stdio.h>

void printchar(int count, char ch){
    if (count <= 0){
        return;
    }

    printf("%c", ch);
    printchar(count - 1, ch);

}

int main(){
    int count;
    char ch;

    printf("enter a number:");
    scanf("%d", &count);

    printf("enter a character:");
    scanf(" %c", &ch);

    printchar(count, ch);

    printf("\n");

    return 0;

}
