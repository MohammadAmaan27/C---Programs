#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int count(struct Node* head, int search_for)
{    struct Node* current = head;
    int count = 0;
    while (current != NULL) {
        if (current->data == search_for)
            count++;
        current = current->next;
    }
    return count;
}
int main()
{   int n;
    struct Node* head = NULL;
    push(&head, 10);
    push(&head, 30);
    push(&head, 20);
    push(&head, 30);
    push(&head, 50);
    printf("enter number to be counted:\n");
     scanf("%d",&n);
    printf("count of n is %d", count(head, n));
    return 0;
}

