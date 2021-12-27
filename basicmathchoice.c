#include <stdio.h>
int main () {

int num1,num2,choice,result;
printf("Enter 2 numbers");
scanf("%d%d",&num1,&num2);
printf("1 for addition \n2 for subtraction \n3 for multiplicatio \n4 for division \nenter your choice");
scanf("%d",&choice);
if(choice==1){
    result=num1+num2;
    printf("Result is %d",result);
}else if (choice==2){
    result=num1-num2;
    printf("Result is %d",result);
}else if(choice==3){
    result=num1*num2;
    printf("Result is %d",result);
}else if(choice==4){
    result=num1/num2;
    printf("Result is %d",result);

}else{
    printf("fool");
}
return 0;
}
