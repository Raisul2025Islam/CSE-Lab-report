                     #include<stdio.h>
                     int main(){
 int A;
 printf("Enter size of array : ");
 scanf("%d",&A);
 int arr[A],i,sum=0;
 printf("Enter elements in the array : ");
 for(i=0;i<A;i++){
 scanf("%d",&arr[i]);
 }
 int maximum = arr[0], minimum = arr[0];
 for(i=0; i<A; i++) {
 if( arr[i] > maximum){
 maximum = arr[i];
 }
 else if(arr[i] < minimum){
 minimum = arr[i];
 }
 }
 printf(" Maximum element is : %d",maximum);
 printf("\n\nMinimum element is : %d",minimum);
 return 0;
}
