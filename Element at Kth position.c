#include<stdio.h>
void insert(int *arr,int k,int e){
  int i;
  for (i=8;i>=k;i--){
    *(arr + i ) = *(arr + i -1);
  }
*(arr + k) = e;
return;
}
int main(){
  int arr[8],e,i,k;
  printf("Enter elements of the array: ");
   for(i=0;i<7;i++) 
      scanf("%d",&arr[i]);
    printf("\nEnter Element to insert in Array : ");
    scanf("%d",&e);
  printf("\nEnter position of new element in Array : ");
   scanf("%d",&k);
   insert(&arr,k,e);
   printf("\nNew Array after insertion: " );
  for(i=0;i<8;i++)
   printf(" %d",arr[i]);
  return 0;
}

