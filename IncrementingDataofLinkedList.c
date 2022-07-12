#include<stdio.h>
#include<stdlib.h>

struct node{int data;
struct node* next;};

void traverse(struct node* head){
  struct node* a;
  a = (struct node*)malloc(sizeof(struct node));
  a =head;
  printf("START->");
  a=a->next;
  while(a!=NULL)
{
  printf("%d -> ",a->data);
  a= a->next;
}
 printf("END");
}

void insertHead(struct node* head)
{  struct node* newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter New element\n");
  scanf("%d",&newnode->data);
  newnode->next = head->next;
  head->next= newnode;
  printf("\nAdded new node\n");  
}

void incrementBy10(struct node* head){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp = head->next;
	while(temp!=NULL) {
		temp->data += 10;
		temp = temp->next;}
}
int main(){
int ch;
struct node* head;
head= (struct node*)malloc(sizeof(struct node));
head->next = NULL;
head->data = 0;

while(ch<3)
{
  printf("\nLinked List\n");
  traverse(head);
  printf("\n 1.Insertion at begin");
  printf("\n 2.Increment by 10");
  printf("\n");
  scanf("%d",&ch);
switch(ch){     
     case 1: insertHead(head);
     break;
     case 2: incrementBy10(head); }
}
return 0;
}

