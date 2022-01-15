#include <stdio.h>

int sum(int,int); 
int main () {
    int a,b,res;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res=sum(a,b);
    printf("Result is %d", res);
    return(0);
    }

  int sum(int num1,int num2){  // Return value is of type int. So int  is used before function.
     int result;
     result=num1+num2;
     return result; //value is returned to where the function is called

 }