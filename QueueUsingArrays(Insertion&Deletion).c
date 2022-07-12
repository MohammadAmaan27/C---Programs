#include <stdio.h>
#include<conio.h>
void pop(int *front,int rear){
    if(*front==-1||*front ==10|| *front ==rear)
    printf("\nUNDERFLOW");
    else  {
    *front= *front + 1; }
}
void push(int *arr, int *rear){int num;
    if(*rear==6){
	printf("\n OVERFLOW");
    }
    else{
    printf("\nEnter element to insert:");
    scanf("%d",&num);
    *rear=*rear+1;
    *(arr + *rear) = num;
    }
}
void traverse(int arr[7],int front,int rear){
    int i;
    for(i=front; i<=rear;i++)
    printf("%d ",arr[i]);
}
int main(void) {
    int queue[7]={11,23,32,44,59,0,0,0,0,0};
    int front=0,rear=4,ch=0;
    while(ch!=3)
    {printf("\nThe Queue is:\n");
    traverse(queue,front,rear);
    printf("\nPress 1 to push");
    printf("\nPress 2 to pop ");
    printf("\nPress 3 to exit");
    printf("\n");
    scanf("%d",&ch);
	switch(ch){
	    case 1:push(&queue[0],&rear);
	    break;
	    case 2:pop(&front,rear);
	    break;
	    default:
	    ch=3;
	    }
    }
}


