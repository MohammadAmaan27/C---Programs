#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
void traverse(struct node* head){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp =head->next;
    printf(" HEAD->");
    while(temp!= NULL){
	printf("%d->", temp->data);
	temp = temp->next;
    }
    printf("END");
}
void insertBegin(struct node* head){
    int data= 0;
    struct node* newnode;
    struct node* temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    temp = (struct node*)malloc(sizeof(struct node));
    newnode->data = 0;
    printf("Enter the new element:");
    scanf("%d",&data);

    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head->next == NULL){
	head->next = newnode;
	newnode->prev = head;
	return;
    }
    temp= head->next;
    head->next = newnode;
    newnode->prev= head;
    newnode->next = temp;
    temp->prev = newnode;
}

void insertEnd(struct  node* head){
    int ele;
    struct node* newnode;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    newnode = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp->next != NULL)
    temp = temp->next;
    printf("Enter new element to insert at end:");
    scanf("%d",&newnode->data);
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next= NULL;
}

void linearSearch(struct node* head){
int n=0,ele;
struct node* temp;
temp = (struct node*)malloc(sizeof(struct node));
temp = head;
printf("Enter element to search for:");
scanf("%d",&ele);
while(temp->next != NULL){
	temp=temp->next;
	n++;
	if(temp->data == ele)
  {printf("ELEMENT FOUND AT %d",n); return;}
}
 printf("ELEMENT NOT FOUND");
}

int main()
{   int ch=1;
    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;
    while(ch<3){
	printf("\nDouble Linked List::\n");
	traverse(head);
	printf("\n 1. To insert at beginning");
  printf("\n 2. To insert at end");
  printf("\n 3. To search");
  printf("\n");
	scanf("%d", &ch);
	switch (ch){
	    case 1: insertBegin(head);
	    break;
	    case 2: insertEnd(head);
      break;
      case 3: linearSearch(head);
	}
    }
    return 0;
}

