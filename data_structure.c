#include<stdio.h>
#include<stdio.h>
typedef struct node
{
    int data;
    struct node *link;
} Node;
int main()
{
    Node a,b,c;

    a.data=10;
    a.link = &b;

    b.data=20;
    b.link = &c;

    c.data=30;
    c.link=NULL;
    
    
    Node *ptr=&a;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
 }
