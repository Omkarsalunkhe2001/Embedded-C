//write a c program take two integer variables and swap their values.
//omkar salunkhe

#include<stdio.h>

int main(){

    int a,b;

    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);

    printf("after swapping:\n a:%d\n b:%d,",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nbefore swapping:\n a:%d\n b:%d,",a,b);

    return 0;
}