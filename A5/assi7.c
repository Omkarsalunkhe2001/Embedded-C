//write a c program to reads a string from the user, use pointers to reverse the string in place and prints the original and reversed strings.
//omkar salunkhe

#include<stdio.h>
#include<string.h>

void reverseString(char *str){

    char *start = str;
    char *end = str + strlen(str)-1;
    char *temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(){
    char str[100];

    printf("enter a string :");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str,"\n")] = '\0';

    printf("original string :%d\n", str);

    reverseString(str);

    printf("reversed string: %s\n", str);

    return 0;
}