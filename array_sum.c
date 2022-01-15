#include <stdio.h>

 
int main () {

    int i,limit,values[100],sum=0;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("Enter values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }

    for(i=0;i<limit;i++){
        sum=sum+values[i];
            }
    printf("Result: %d",sum);
}