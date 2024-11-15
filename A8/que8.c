//write a c program to merge the contents of multiple text files into a single file.
//omkar salunkhe

#include<stdio.h>
#include<stdlib.h>

#define BUFFER_SIZE 1024

void mergefiles(int argc, char *argv[]){
    if(argc < 3){
        fprintf(stderr, "Usage: %s output_file input_file1 [input_file2 ... input_fileN]\n", argv[0]);
        exit(EXIT_FAILURE);

    }
 
    char buffer[BUFFER_SIZE];
    for(int i = 2; i < argc; ++i){
        FILE *inputfile = fopen(argv[i], "r");
        if(inputfile == NULL){
            perror("Error opening input file");
            continue;
        }

        while(fgets(buffer, sizeof(buffer), inputfile) != NULL){
            fputs(buffer, outputfile);

        }
        fclose(inputfile);
    }
      fclose(outputfile);
      printf("files have been merged successfully into %s\n", argv[1]);

}

int main(int argc, char*argv[]){
    mergefiles(argc, argv);

    return 0;
     
}