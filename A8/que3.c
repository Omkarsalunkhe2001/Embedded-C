//Write a c program to read the content of a file and display on it on the screen.
//omkar salunkhe

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *file;
    char ch;

    file = fopen("file.txt", "r");

    if(file == NULL){
        printf("Error! could not open the file.\n");
        return 1;

    }

    while((ch = fgetc(file)) != EOF){
        putchar(ch);

    }

    fclose(file);

    return 0;
}
