//define an enum typeshape with values CIRCLE, RECTANGLE, SQUARE and TRIANGLE. write a c program that uses a switch statement to print a discription for each ashpe type for example, "CIRCLE: A round shape".etc
//omkar salunkhe

#include<stdio.h>

typedef enum {
    TRIANGLE,
    RECTANGLE,
    SQUARE,
    CIRCLE,
}shapetype;

int main(){
    int coco;
    printf("enter the shape u want 0, 1, 2, 3\n");
    scanf("%d",&coco);

      shapetype shape = coco;

    switch(shape){
        case TRIANGLE:
        printf("A triangle have three sides");
        break;
        
        case RECTANGLE:
        printf("A shape with four right angles");
        break;

        case SQUARE:
        printf("A four sides are equal");
        break;

        case CIRCLE:
        printf("A round shape");
        break;

        default:
        printf("No any one shape");

    }
      


    return 0;
}