//define a structure circle with members radius (float) and color (string of 20 character). write a function updateRadius that takes a pointer to a circle structure and a new radius value, updates the radius of the circle, and then prints the updated radius
//omkar salunkhe

#include<stdio.h>
#include<string.h>

typedef struct{

    float radius;
    char color[20];
}circle;

void updateRadius(circle *c, float newradius){

    if(c == NULL){

    printf("invalid circle pointer.\n");
    return;
    }
    c->radius = newradius;
    printf("the update radius :%.2f\n", c->radius);

}

int main(){

    circle mycircle;
    mycircle.radius = 5.0;
    strncpy(mycircle.color,"red", sizeof(mycircle.color)- 1);
    mycircle.color[sizeof(mycircle.color) - 1] = '\0';

    printf("initial radius :%2f\n", mycircle.radius);

    updateRadius(&mycircle, 10.0);

    return 0;
}

