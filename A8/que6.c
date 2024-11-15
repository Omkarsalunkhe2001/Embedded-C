//Writw a c program to copy the contents of one file to another.
//omkar salunkhe

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourcePath[100], targetPath[100];
    char ch;

    // Get source and target file paths
    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    printf("Enter the path of the target file: ");
    scanf("%s", targetPath);

    // Open source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        exit(EXIT_FAILURE);
    }

    // Open target file in write mode
    targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        printf("Error: Could not open target file.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Copy contents from source file to target file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File copied successfully.\n");

    // Close files
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
