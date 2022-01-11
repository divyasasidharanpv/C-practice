#include <stdio.h>
#include <stdlib.h>
 
int main () {
    int num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("Greatest number is %d",num1);
    }else{
        printf("Greatest number is %d",num2);

    }
}