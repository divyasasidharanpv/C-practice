#include <stdio.h>

void sum(int,int); //function declaration; argument type should be given. here, it is int.
int main () {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum(a,b); //values of a and b passed to num1 and num2 in sum
    return(0);
}

void sum(int num1,int num2){
    int result;
    result=num1+num2;
    printf("Result is: %d", result);
}