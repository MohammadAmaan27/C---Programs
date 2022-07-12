#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *left, *right;
	int visited;
};

void preorder(struct Node* root){
  while (root){
    if (root->left == NULL){
      printf("%d ",root->data);
      root = root->right;
    }else{
      struct Node* current = root->left;
      while (current->right && current->right != root)
      current = current->right;
      if (current->right == root){
        current->right = NULL;
        root = root->right;
      }else{
        printf("%d ",root->data);
        current->right = root;
        root = root->left;
      }
    }
  }
}

void inorder(struct Node* root){
  struct Node *current, *pre;
  if (root == NULL)return;
  current = root;
  while (current != NULL) {
    if (current->left == NULL) {
      printf("%d ", current->data);
      current = current->right;
    }else {
      pre = current->left;
      while (pre->right != NULL && pre->right != current)pre = pre->right;
      if (pre->right == NULL) {
        pre->right = current;
        current = current->left;
      }else {
        pre->right = NULL;
        printf("%d ", current->data);
        current = current->right;
      }
    }
  }
}

void postorder(struct Node* head) {
	struct Node* temp = head;
	while (temp && temp->visited == 0) {

		if (temp->left && temp->left->visited == 0)
			temp = temp->left;

		else if (temp->right && temp->right->visited == 0)
			temp = temp->right;

		else {
			printf("%d ", temp->data);
			temp->visited = 1;
			temp = head;
		}
	}
}

struct Node* newNode(int data) {
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->visited = 0;
	return (node);
}

int main() {
	struct Node* root = newNode(8);
	root->left = newNode(3);
	root->right = newNode(10);
	root->left->left = newNode(1);
	root->left->right = newNode(6);
	root->left->right->left = newNode(4);
	root->left->right->right = newNode(7);
	root->right->right = newNode(14);
	root->right->right->left = newNode(13);
  printf("Postorder : ");
	postorder(root);
  printf("\nInorder : ");
  inorder(root);
  printf("\nPreorder : ");
  preorder(root);
	return 0;
}

