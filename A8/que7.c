//Write a c program to count the number of characters, words, and lines in a file.
//omkar salunkhe

#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inword = 0;

    file = fopen("file.txt", "r");

    if(file == NULL){
        printf("Error! could not open the file.\n");
        return 1;
    }

    while((ch = fgetc(file)) != EOF){
        characters++;

        if(ch == '\n'){
            lines++;

        }

        if(isspace(ch)){
            inword = 0;
        }else if (inword == 0){
            inword = 1;
            words++;
        }
    }

    fclose(file);

    if(characters > 0 && ch != '\n'){
        lines++;
    }

    printf("characters :%d\n", characters);
    printf("words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
