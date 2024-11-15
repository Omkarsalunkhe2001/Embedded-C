//write a c program to print 5 inetgers in a row and then in different rows without using any loop.
//omkar salunkhe

#include<stdio.h>

int main(){

    int num[5] = {1,2,3,4,5};

    printf("%d %d %d %d %d\n",num[0], num[1], num[2], num[3], num[4]);

    printf("%d\n%d\n%d\n%d\n%d\n", num[0], num[1], num[2], num[3], num[4]);

    return 0;
}