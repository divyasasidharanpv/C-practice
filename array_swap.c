#include <stdio.h>
 
int main () {
int i,limit;
    int a[100];
    int b[100];
    
    
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter values for first array: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    
    printf("entered values for first array are: \n");
    for(i=0;i<limit;i++){
    printf("%d ",a[i]);
    }
   printf("Enter values for second array: ");
    for(i=0;i<limit;i++){
        scanf("%d",&b[i]);
    }
    
    printf("entered values for second array are: \n");
    for(i=0;i<limit;i++){
    printf("%d ",b[i]);
    }
    printf ("After swap first array values are: ");
    for(i=0;i<limit;i++){  
    a[i]=b[i]+a[i];
    b[i]=a[i]-b[i];
    a[i]=a[i]-b[i];
    printf("%d ",a[i]);
    }

    printf ("After swap second array values are: ");
    for(i=0;i<limit;i++){  
    printf("%d ",b[i]);
    }
   
   printf("\n");
}
    

    

   


    

