#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
	};

void traverse(struct node *base,int n){
	int i=0;

	if(base->right!=NULL)
	traverse(base->right, n+4);

	for(i=0;i<n;i++) printf(" ");
	printf("%d\n",base->data);

	if(base->left!= NULL)
	traverse(base->left,n+4);

}

struct node* newNode(int data){
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

void insertNewNode(struct node *root,int d){
if(root==NULL){ root = newNode(d); return; }
if(root->data > d)
{	if(root->left== NULL){root->left = newNode(d);}
	else {insertNewNode(root->left,d); }}

if(root->data<d)
{
	if(root->right == NULL) {root->right = newNode(d);}
	else {insertNewNode(root->right,d);}}
}

struct node* search(struct node *root,int n){
if(root->data == n){return root;}
if(root->right==NULL&&root->left==NULL){
  printf("\nElement does not exist");
  return newNode(-5);
}
if(root->data>n){
  return search(root->left,n);
}
else return search(root->right,n);
}
void inorder(struct node* root){
if(root->left!=NULL)
inorder(root->left);
printf(" %d",root->data);
if(root->right!=NULL)
inorder(root->right);

}
void preorder(struct node* root){
printf(" %d",root->data);
if(root->left!=NULL)
preorder(root->left);
if(root->right!=NULL)
preorder(root->right);

}

void postorder(struct node* root){
if(root->left!=NULL)
postorder(root->left);
if(root->right!=NULL)
postorder(root->right);
printf(" %d",root->data);

}

int main(){
int n=0,temp;
struct node *tempNode = newNode(-5);
struct node *root;
printf("Enter the root node of the tree: ");
scanf("%d",&n);
root = newNode(n);
n=1;
while(n<=4)
{
	printf("\nBINARY TREE:\n\n");
	traverse(root,0);
	printf("\n 1.to insert");
  printf("\n 2. to search");
  printf("\n 3.Inorder,Preorder and Postorder traversal");
  printf("\n");
	scanf("%d",&n);
	switch(n){
	case 1: printf("\nEnter New element to insert:");
	scanf("%d",&temp);
	insertNewNode(root,temp);
	break;
	case 2: printf("Enter element to search for:\n" );
	scanf("%d",&temp);
	tempNode = search(root,temp);
	if(tempNode->data != -5) printf("Element found");
	getch();
	break;
	case 3: printf("\n Inorder :");
	inorder(root);
	printf("\n Preorder :");
	preorder(root);
	printf("\n Postorder :");
	postorder(root);
	break;
	}

}
return 0;
}

