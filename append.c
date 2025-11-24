#include<stdio.h>
#define SIZE 10
typedef struct stack
{
    int arr[SIZE];
    int top;
}stack;
void init(stack *s){
    s->top=-1;
}
int main()
{
    stack s;
    push(&s,10);
    push(&s,20);
    push(&s,30);
    printf("%d"      .   
}