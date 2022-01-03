#include <stdio.h>

int main () {
    //input 5 numbers from user and print values
int a[5];
int i;
printf("Enter values: ");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("Entered values are: ");
for(i=0;i<5;i++){
    printf("%d \t", a[i]);
}
}