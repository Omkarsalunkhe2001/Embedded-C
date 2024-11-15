//take month number from user and print how many days are there in that month by using switch statement.
//omkar salunkhe

#include<stdio.h>

  int main(){

    int month;

    printf("enter a month :");
    scanf("%d", &month);

    switch(month){


        case 1:
               printf("jan month has 31 days");
               break;

        case 2:
               printf("feb month has 28 days");
               break;

        case 3:
               printf("march month has 30 days");
               break;

        case 4:
               printf("april month has 31 days");
               break;

        case 5:
               printf("may month has 30 days");
               break;

        case 6:
               printf("june month has 31 days");
               break;

        case 7:
               printf("jul month has 30 days");
               break;

        case 8:
               printf("aug month has 31 days");
               break;

        case 9:
               printf("sept month has 30 days");
               break;

        case 10:
               printf("oct month has 31 days");
               break;

        case 11:
               printf("nov month has 30 days");
               break;

        case 12:
               printf("dec month has 31 days");
               break;

        default: 
                printf("Error! value are not found");      

           
                              


    }
   
    return 0;
}