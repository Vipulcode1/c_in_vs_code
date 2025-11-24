#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;

}Node;
Node*append(Node*head,int num)
{
    Node*n= malloc(sizeof(Node));
    n->data=num;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        return head;
    }
 Node *ptr=head;
 while(ptr->next!=NULL){
    ptr=ptr->next;
 }
 ptr->next=n;
 return head;


}
void display(Node *head){
    Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
        return ;
    }
}
int main(){
    Node *head=NULL;
    head=append(head,10);
    append(head,20);
    append(head,30);
    display(head);
}