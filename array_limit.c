#include <stdio.h>

int main () {
    //array limit from user
int a[100];
int i,limit;
printf("Enter array limit");
scanf("%d",&limit);
printf("Enter values: ");
for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
printf("Entered values are: ");
for(i=0;i<limit;i++){
    printf("%d",a[i]);
}
}