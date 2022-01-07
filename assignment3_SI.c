#include <stdio.h>
#include <stdlib.h>
 
int main () {

    int P;
    float R,n,SI;
    printf("Enter Principal amount: \n");
    scanf("%d",&P);
    printf("Enter interest rate: \n");
    scanf("%f",&R);
    printf("Enter number of years: \n");
    scanf("%f",&n);
    SI=(P*R*n)/100;
    printf("Simple interest is %f: ",SI);
    printf("\n");
}
