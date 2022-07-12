#include <stdio.h>
int main() 
{
	int x;
	unsigned int start=0, end=10,mid;
    int arr[10]={0,1,2,3,4,5,6,7,8,9,10};
	printf("Enter the element to be found:");
	scanf("%d",&x);
 while(1){
        mid= (start +end)/2;
          if(arr[mid]==arr[x])
          {
             printf("\nNumber found at position %d", mid);
             break;
          }
          if(arr[mid]>arr[x])
              end=mid-1;
          if(arr[mid]<arr[x])
              start = mid+1;
          if(start == end && arr[start]!= x)
            {
               printf("\nNumber not found in the array");
               break;
            }
     }
return 0;
}

