#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;   
} Node;

Node *prepend(Node *head, int data);
void display(Node *head);

int main() {
    Node *head = NULL;

    head = prepend(head, 10);
    head = prepend(head, 20);
    head = prepend(head, 30);
    head = prepend(head, 40);
    head = prepend(head, 50);
    head = prepend(head, 60);
    head = prepend(head, 70);
    head = prepend(head, 80);
    head = prepend(head, 90);
    display(head);

    return 0;
}

Node *prepend(Node *head, int data) {
    Node *n = malloc(sizeof(Node));
    n->data = data;
    n->next = head;  
    return n;         
}

void display(Node *head) {
    Node *temp = head;
     while (temp != NULL) {
         printf(format:"%d -> ", temp->data);
         temp = temp->next;
     }
     printf(format:"NULL\n");

}