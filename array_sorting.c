#include <stdio.h>

 
int main () {
    int i,j,limit,values[100],temp;
    printf("Enter limit: ");
    scanf("%d",&limit);
    printf("Enter values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(values[i]>values[j]){
                temp=values[i];
                values[i]=values[j];
                values[j]=temp;
            }
        }
    }

            printf("Sorted values: ");
            for(i=0;i<limit;i++){
                printf("%d ",values[i]);
            }
}

//ascending order
