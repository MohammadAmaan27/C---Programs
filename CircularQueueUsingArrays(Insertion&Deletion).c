#include <stdio.h>
void pop(int *front,int *rear){
    if(*front==-1||*front == *rear){
    printf("\nUNDERFLOW");
    return;}
    if(*front == *rear +1){
      *front = -1;
      *rear = -1;
      return;
    }
    if(*front == 6) *front ==-1;
    *front= *front + 1;
}
void push(int *arr,int *front,int *rear){
    int num;
    if(*front == *rear-1 || (*rear == 6 && *front == 0)){
      printf("\n OVERFLOW");
      return;
    }
    printf("\nEnter element to add:");
    scanf("%d",&num);
    if(*rear == -1){
      *front = 0;
      *rear = 1;
      *arr =num;
      return;
    }
    if(*rear == 6){*rear = 0;}
    else {*rear=*rear+1;}
    *(arr + *rear -1 ) = num;
}
void traverse(int arr[10],int front,int rear){
    int i;
    for(i=front; i!=rear;i++)
    { if(i==7) i=0;
      printf("%d ",arr[i]);
    }
}
int main(void) {
    int queue[7]={12,23,43,47,69,0,0};
    int front=0,rear=5,ch=0;
    while(ch!=3)
    {printf("\nThe Circular Queue is:\n");
    traverse(queue,front,rear);
    printf("\nPress 1 to push");
    printf("\nPress 2 to pop");
    printf("\nPress 3 to exit");
    printf("\n");
    scanf("%d",&ch);
	switch(ch){
	    case 1:push(&queue[0],&front,&rear);
	    break;
	    case 2:pop(&front,&rear);
	    break;
	    default:
	    ch=3;
	    }
    }
}

