#include <stdio.h>

void sum(); //declaring function
int main () {
    //A main is a predefined keyword or function in C. It is the first function of every C program that is responsible for starting the execution and termination of the program. It is a special function that always starts executing code from the 'main' having 'int' or 'void' as return data type.
//The void main() indicates that the main() function will not return any value, but the int main() indicates that the main() can return integer type data. //
    sum(); // calling function
    sum();
    return(0);
}
void sum(){
    // function definition
    int num1,num2,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Result is: %d ",sum);
}