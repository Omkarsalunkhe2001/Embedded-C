//write a c program to calculate power of given base and index(power = base^index).
//omkar salunkhe

#include<stdio.h>
int main(){
    int base, index;
    long long result = 1;

    printf("enter base:");
    scanf("%d", &base);

    printf("enter index:");
    scanf("%d", &index);

    for(int i = 0; i < index; i++){
        result *= base;
    } 

    printf("%d^%d = %lld\n", base, index, result);

    return 0;
}