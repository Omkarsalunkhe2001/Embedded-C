//define a srtucture named rectangle that includes two numbers: lenght and width, both of type float. write a function print rectangle that takes a rectangle structure as an arguments and prints its lenght and width.
//omkar salunkhe

#include<stdio.h>

typedef struct{

    float lenght;
    float width; 

}rectangle;

void printrectangle(rectangle rect){

    printf("lenght: %.2lf\n", rect.lenght);
    printf("width: %.2lf\n", rect.width);

}

int main(){

    rectangle myrectangle = {30.5, 8.60};

    printrectangle(myrectangle);

    return 0;
}