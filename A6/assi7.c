//define a union named vehicle that can store ither the number of wheel (int), the engine capacity(float), or thye vehicle type (char[20]). Write a program demonstrate how to use this union to store and print all three types of data.
//omkar salunkhe

#include<stdio.h>
#include<string.h>

union vehicle{
    int wheels;
    float engine_capacity;
    char vehicle_type[20];
};

int main(){
    union vehicle vehicle;

    vehicle.wheels = 4;
    printf("number of wheles:%d\n",vehicle.wheels);

    vehicle.engine_capacity = 1.8;
    printf("engine_capacity :%1fl\n",vehicle.engine_capacity);

    strcpy(vehicle.vehicle_type,"fortuner");
    printf("vehicle type:%s\n", vehicle.vehicle_type);

    return 0;
}
