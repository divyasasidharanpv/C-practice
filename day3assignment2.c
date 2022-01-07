#include <stdio.h>
#include <stdlib.h>
 
int main () {
    float mark;
    printf("Enter marks");
    scanf("%f",&mark);
    if(mark>=50){
        printf("Passed");
    }else{
        printf("Failed");
    }
}