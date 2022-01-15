#include <stdio.h> //stdio. h is a header file which has the necessary information to include the input/output related functions in our program. ... If we want to use printf or scanf function in our program, we should include the stdio. h header file in our source code.
//stdio.h stands for Standard Input Output. What happens when printf/scanf is called is defined here.
// Preprocessor directives are lines included in a program that begin with the character #, which make them different from a typical source code text. They are invoked by the compiler to process some programs before compilation. 
int sum();
int main () {
    int d;
    d=sum();
    printf("Result is %d",d);
    return(0);
}
    int sum(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
    }
