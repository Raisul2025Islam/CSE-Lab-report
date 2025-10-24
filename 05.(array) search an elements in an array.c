                          #include<stdio.h>
  int main(){
 int A;
 printf("Enter size of array : ");
 scanf("%d",&A);
 int arr[A], i, number, check=0;
 printf("Enter elements of Array : ");
 for(i=0;i<A;i++){
 scanf("%d",&arr[i]);
 }
 printf("Enter number : ");
 scanf("%d", &number);
 for(i=0;i<A;i++){
 if(arr[i]==number){
 check=1;
 break;
 }
 }
 if(check==1) printf("Found in index %d",i+1);
 else printf("Not found");
 return 0;
}
