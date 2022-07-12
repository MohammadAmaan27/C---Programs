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
{struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
printf("\nEnter New element\n");
scanf("%d",&newnode->data);
newnode->next = head->next;
head->next= newnode;
printf("\nAdded new node\n");
}

void insertEnd(struct node* head){
struct node* newnode;
struct node* temp;
newnode = (struct node*)malloc(sizeof(struct node));
temp = (struct node*)malloc(sizeof(struct node));
temp = head;
while(temp->next!=NULL){temp= temp->next;}
printf("\nEnter New element\n");
scanf("%d",&newnode->data);
newnode->next = NULL;
temp->next = newnode;
printf("\nAdded New Element\n");
}

void insertMiddle(struct node* head){
int n;
struct node* newnode;
struct node* temp;
newnode = (struct node*)malloc(sizeof(struct node));
temp = (struct node*)malloc(sizeof(struct node));
printf("Which position do you want to insert at");
scanf("%d",&n);
temp=head;
n--;
while(n>0){temp=temp->next;n--;}
printf("\nEnter New element\n");
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next = newnode;

}

void deleteHead(struct node* head){
if(head->next == NULL)
printf("Underflow");
else{
struct node* temp;
temp =(struct node*)malloc(sizeof(struct node));
temp= head->next;
temp = temp->next;
head->next =temp;
}
}

void deleteEnd(struct node* head){
if(head->next== NULL){
printf("\n\nUnderFlow");
}
else{
struct node* last;
struct node* secLast;
last = (struct node*)malloc(sizeof(struct node));
secLast = (struct node*)malloc(sizeof(struct node));
last = head;
secLast = head;
while(last->next != NULL){
secLast = last;
last = last->next;
}

secLast->next = NULL;
}}

void deleteMid(struct node* head){
struct node* temp;
struct node* temp2;
int num;
printf("Enter element index to delete");
scanf("%d",&num);
num--;
temp =  (struct node*)malloc(sizeof(struct node));
temp2 = (struct node*)malloc(sizeof(struct node));
temp = head;
for(;num>0;num--)
temp=temp->next;
temp2 =temp->next;
temp2=temp2->next;
temp->next = temp2;
}

void linearSearch(struct node* head){
int flag=1,n=0,ele;
struct node* temp;

temp = (struct node*)malloc(sizeof(struct node));
temp = head;
printf("Enter element to search for");
scanf("%d",&ele);
while(temp->next != NULL){
	temp=temp->next;
	n++;
	if(ele == temp->data)
	{flag =0; break;}
}
if (flag)
{printf("ELEMENT NOT FOUND"); getch();}
else{ printf("ELEMENT FOUND AT %d",n); getch();}
}

int main(){
int ch;
struct node* head;
head= (struct node*)malloc(sizeof(struct node));
head->next = NULL;
head->data = 0;

while(ch<8)
{
printf("\nLinked List\n");
traverse(head);
printf("\n 1.Insertion at begin 2. Insertion at end 3. Insertion at middle \n4. Delete at head 5.Delete at end 6.Delete at mid\n 7.Search ");
scanf("%d",&ch);
switch(ch){

case 1: insertHead(head);
break;
case 2: insertEnd(head);
break;
case 3: insertMiddle(head);
break;
case 4: deleteHead(head);
break;
case 5: deleteEnd(head);
break;
case 6: deleteMid(head);
break;
case 7: linearSearch(head);}

}
return 0;
}

