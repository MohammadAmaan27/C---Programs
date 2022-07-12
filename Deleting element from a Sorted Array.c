#include<stdio.h>
int main(){
  int arr[10];
  int n,i;
  printf("Enter given sorted array:");
  for(i=0;i<10;i++)
     scanf("%d",&arr[i]);
  printf("\nEnter element to delete:");
    scanf("%d",&n);
  for(i=0;i<10;i++){
    if(arr[i]>n) arr[i-1] = arr[i];
  }
  printf("\n New Array :");
   for(i=0;i<9;i++)
     printf(" %d",arr[i]);
  return 0;
}

