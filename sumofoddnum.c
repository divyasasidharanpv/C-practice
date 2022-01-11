#include <stdio.h>
 
int main () {
int i,limit,sum=0;
    printf("enter a limit: ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i+=2){
        sum=sum+i;
    }
    printf("Sum of odd numbers is %d",sum);
}