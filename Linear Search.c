#include <stdio.h>
int main()
{   int arr[] = {10,20,30,40,50,60,70};
    int x,i;
    int y = 0;
    scanf("%d",&x);

    for(i=0;i<6;i++){
        if(arr[i]==x){
             printf("Number Found at position %d",i);
            y = 1;
        }
    }
    if (y==0){
       printf("Invalid Number");
    }
    return 0;
}

