#include <stdio.h>
#include<conio.h>
void pop(int *top){
    if(*top == -1)
    printf("\nSTACK UNDERFLOW");
    else  {
    *top= *top - 1; }
}
void push(int *arr, int *top){int num;
    if(*top==9){
	printf("\nSTACK OVERFLOW");
    }
    else{
    printf("\nEnter element to add:");
    scanf("%d",&num);
    *top=*top+1;
    *(arr + *top) = num;
    }
}
void traverse(int stack[10],int top){
    int i;
    for(i=0; i<=top;i++)
    printf("%d ",stack[i]);
}
int main( ) {
    int stack[10]={1,2,3,4,5,0,0,0,0,0};
    int top=4,ch=0;
    while(ch!=3)
    {printf("\nThe Stack is:\n");
    traverse(stack,top);
    printf("\nPress 1 to push");
    printf("\nPress 2 to pop");
    printf("\nPress 3 to exit");
    printf("\n");
    scanf("%d",&ch);
	switch(ch){
	    case 1:push(&stack[0],&top);
	    break;
	    case 2:pop(&top);
	    break;
	    default:
	    ch=3;
	    }
    }
}


