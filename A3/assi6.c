//write a c program that prints the fibonacci sequence up to n terms using a while loop. the value of n should be provided by user.
// omkar salunkhe

#include<stdio.h>
int main(){
     
     
    int n, t1 = 0, t2 = 1, nextTerm = 0, i = 1; 
    // asking the user to input the number of terms

    printf("enter the number of terms :");
    scanf("%d", &n);

   // printf("fibonacci sequence :");

    while(i <= n){
        //printing the first two terms (0 and 1)

           printf("%d\t", t1);

            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            
            i++;
        }
        

        printf("\n");
    
    return 0;
}