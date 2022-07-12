#include<stdio.h>
int main(){
  int arr[10];
  int j,i,key;
  printf("Enter elements of array: ");
  for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
  for(i=0;i<10;i++){
    key=arr[i];
    j=i-1;
    while(arr[j]>key && j>=0){
      arr[j+1] = arr[j];j--;
    }
    arr[j+1] = key;
  }
  printf("\nAfter Insertion Sort: ");
    for(i=0;i<10;i++){
      printf(" %d",arr[i]);
    }
  return 0;
}


