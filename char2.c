#include <stdio.h>
#include <stdlib.h>
 
int main () {

    char name[20];
    printf("Enter your name:");
     scanf("%[^\n]%*c",name);
     printf("Entered name is: %s \n",name);
}
