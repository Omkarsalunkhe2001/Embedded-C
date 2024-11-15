//write a function that calculates the area of a circle given its radius using the real typedef. print the result in main.
//omkar salunkhe

#include<stdio.h>

typedef double Real;

Real area(Real radius){

const Real PI=3.14159;
return PI * radius * radius;

}

int main(){

Real radius;

printf("Enter radius : ");
scanf ("%lf",&radius);

Real result = area(radius);

printf("Area of circle : %.2lf",result);

return 0;

}