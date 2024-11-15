//Write a c program to define a macro"area" to calculate area of circle after providing radius by user.
//omkar salunkhe

#include<stdio.h>
#define PI 3.14
#define AREA(radius) (PI * (radius)*(radius))

int main(){
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = AREA(radius);

    printf("The area of the circle with radius %.2f is : %.2f\n", radius, area);

    return 0;
}