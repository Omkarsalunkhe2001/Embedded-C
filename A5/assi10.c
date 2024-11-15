//write a c program to perform concatenation on 2 strings. use pointers to string for strcat() function.
//omkar salunkhe

void strcat_custom(char *dest, char *src){

    while(*dest != '\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';

}

int main(){

    char str1[100], str2[50];

    printf("enter first string :");
    gets(str1);

    printf("enter second string :");
    gets(str2);

    strcat_custom(str1, str2);

    printf("concatenated string: %s\n", str1);

    return 0;
}
