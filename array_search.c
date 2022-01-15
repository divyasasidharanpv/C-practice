#include <stdio.h>

 
int main () {

int i,limit,values[100],flag=0,searchkey;
    printf("enter limit: ");
    scanf("%d",&limit);
    printf("enter values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }
    printf("Enter searchkey: ");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++){
        if(searchkey==values[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf(" Value found at position: %d",i+1);
    }
    else{
        printf("value not found");
    }
}