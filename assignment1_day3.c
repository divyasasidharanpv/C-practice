#include <stdio.h>
#include <stdlib.h>
 
int main () {
    float Totalmark;
    printf("Enter total marks: ");
    scanf("%f",&Totalmark);
    if(Totalmark>=90){
        printf("Grade is A");
    }else if(Totalmark>=80&&Totalmark<90){
        printf("Grade is B");
    }else if(Totalmark>=70&&Totalmark<80){
        printf("Grade is C");
    }else if (Totalmark>60&&Totalmark<70){
        printf("Grade is D");
    }else if(Totalmark>50&&Totalmark<60){
        printf("Grade is E");
        }else{
            printf("Failed");

        }
    }

    

    