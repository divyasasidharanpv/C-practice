#include <stdio.h>

int main () {
int choice;
printf("1 for porotta \n2 for biriyani \n3 for fried rice \n4 for mandhi \n Enter your choice");

scanf("%d", &choice);

switch(choice)
{
        
        case 1:
        printf("You have selected porotta");
        break;
    
        case 2:
        printf("You have selected biriyani");
        break;

        case 3:
        printf("You have selected fried rice");
        break;
        
        case 4:
        printf("You have selceted mandhi");
        break;
        
        default:
        printf("Fool");
    }
        return 0;
}

