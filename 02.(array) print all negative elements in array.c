#include<stdio.h>
                         int main(){
     int A;
     printf("Enter size of array : ");
     scanf("%d",&A);
     int arr[A],i;
     printf("Enter elements of array : ");
     for(i=0; i<A; i++){
     scanf("%d",&arr[i]);
     }
      printf("All negative elements are : ");
     for(i=0; i<A; i++){
     if(arr[i]<0){
     printf("%d ",arr[i]);
      }
     }
     return 0;
     }
