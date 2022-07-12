#include<stdio.h>
#include<stdlib.h>

struct node{int data;
struct node* next;};
void traverse(struct node* top){
struct node* a;
a = (struct node*)malloc(sizeof(struct node));
a =top->next;
printf("Top->");
while(a!=NULL)
{
printf("%d -> ",a->data);
a= a->next;
}
}
void push(struct node* top)
{struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
printf("\nEnter New element\n");
scanf("%d",&newnode->data);
newnode->next = top->next;
top->next= newnode;
printf("\nAdded new node\n");
}
void pop(struct node* top){
if(top->next == NULL)
{printf("Underflow");getch();}
else{
top->next = top->next->next;
}
}
int main()
{
int ch ;
struct node* top ;
top= (struct node*)malloc(sizeof(struct node));
top->next = NULL;
top->data = 0;
ch =1;
while(ch<3)
{
printf("\nLinked Stack\n");
traverse(top);
printf("\n 1.Push Element");
printf("\n 2.Pop element");
printf("\n");
scanf("%d",&ch);
switch(ch){
case 1: push(top);
break;
case 2: pop(top);
break;
}
}
return 0;
}

