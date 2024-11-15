//write a c program to print the temperature and pressure of heat chamber on the given console one by one with efficient memory usage through unions.
//omkar salunkhe

#include<stdio.h>

union heatchamberdata{
    float temperature;
    float pressure;

};

int main(){
    union heatchamberdata chamberdata;

    printf("enter the temperature(in celcius)");
    scanf("%f", &chamberdata.temperature);

    printf("temperature :%.2fc\n",chamberdata.temperature);

    printf("enter the pressure (in pascals):");
    scanf("%f", &chamberdata.pressure);

    printf("pressure :%.2fpascals\n",chamberdata.pressure);

    return 0;
}