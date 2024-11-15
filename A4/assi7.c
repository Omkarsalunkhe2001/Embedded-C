//write a c program to get a person's height and weight and calculate their BMI.
//omkar salunkhe

#include<stdio.h>

int main(){

    float height, weight, bmi;

    printf("enter your height in meters:");
    scanf("%f",&height);

    printf("enter your weight in kg :");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("your BMI is :%.2f\n",bmi);

    return 0;

}
