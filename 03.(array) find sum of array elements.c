                            #include<stdio.h>
int main(){
     int A;
     printf("Enter size of array : ");
     scanf("%d",&A);
     int arr[A],i,sum=0;
     printf("Enter the elements of array  : ");
     for(i=0;i<A;i++){
     scanf("%d",&arr[i]);
     }
     for(i=0;i<A;i++){
     sum = sum + arr[i];
     }
     printf("Sum of all elements is : ");
     printf("%d",sum);
 return 0;
}
