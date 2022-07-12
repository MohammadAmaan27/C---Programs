#include<stdio.h>
int main(){
int n,i,temp,j;
int arr[10]={1,2,6,3,5,9,8,7,0,4};
printf("\nBefore sorting: ");
for(i=0;i<10;i++)
printf("%d",arr[i]);

for(i=0;i<10;i++){
	for(j=0;j<10-i-1;j++){
		if(arr[j]>arr[j+1])
			 {temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
}
printf("\nAfter applying bubble sorting: ");
for(i=0;i<10;i++)
  printf("%d",arr[i]);
return 0;
}


