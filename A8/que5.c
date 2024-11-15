//Write a c program to append text to an existing file.
//omkar salunkhe

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;
    char input[1000];

    file = fopen("output.txt", "a");

    if(file == NULL){
        printf("Error! cloude not open the file.\n");
        return 1;

    }

    printf("Enter text append to the file.\n");

    fgets(input, sizeof(input), stdin);

    fprintf(file, "%s", input);

    fclose(file);

    printf("Text successfully appended to 'output.txt'.\n");

    return 0;
}