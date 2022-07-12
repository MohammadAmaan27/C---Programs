#include<stdio.h>
int Minimum(int a[],int start,int end){
  int i,ans;
  ans = start;
  for( i= start;i<end;i++){
    if(a[i]<a[ans]){
      ans = i;
    }
  }
  return ans;
}
int main(){
  int arr[10];
  int i,n,temp;
  printf("Enter the elements of the array: ");
  for(i=0;i<10;i++) 
       scanf("%d",&arr[i]);
  for(i=0;i<10;i++){
        n = Minimum(arr,i,10);
    temp =arr[i];
    arr[i]= arr[n];
    arr[n] = temp;
  }
  printf("\nAfter Sort: ");
  for(i=0;i<10;i++) 
     printf(" %d",arr[i]);
  return 0;
}

