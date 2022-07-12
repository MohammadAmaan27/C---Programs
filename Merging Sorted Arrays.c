#include<stdio.h>
int main(){
  int a[5],b[5],c[10];
  int apt=0,bpt=0,cpt=0,i;
  printf("Enter first sorted array: ");
  for(i=0;i<5;i++) 
    scanf("%d",&a[i]);
  printf("Enter second sorted array: ");
  for(i=0;i<5;i++) 
    scanf("%d",&b[i]);
  for(i=0;i<11;i++){
    if(apt>=5) {
       for(i=bpt;i<5;i++)c[cpt++] = b[i];
       break;
     }
    if(bpt>=5) {
      for(i=apt;i<5;i++)c[cpt++] = a[i]; 
      break;
     }
    if(a[apt]<=b[bpt]) {
          c[cpt++] = a[apt++];
          continue;
     }
    if(a[apt]>b[bpt]) {
          c[cpt++] = b[bpt++];
          continue;
      }
  }
  printf("\n New Array :");
  for(i=0;i<10;i++) printf(" %d",c[i]);
  return 0;
}

