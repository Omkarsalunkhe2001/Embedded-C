//write a c program to create a file and write user input into it.
//omkar salunkhe

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *file;
    char input[1000];

    file = fopen("output.txt", "w");

    if(file == NULL){
        printf("Error! could not creat the file.\n");
        return 1;

    }

    printf("enter text to write to the file (press enter the finish):\n");

    fgets(input, sizeof(input), stdin);

    fprintf(file, "%s", input);

    fclose(file);

    printf("Text successfully written to 'output.txt'.\n");

    return 0;

}