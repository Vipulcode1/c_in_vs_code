#include<stdio.h>
#define SIZE 5
typedef struct queue{
    int front;
    int rear;
    int arr[SIZE];
} queue;
void init(queue *q){
    q->front = 0;
    q->rear = 0;
}
int isEmpty(queue *q){
    if(q->front == q->rear)
    return 1;
    return 0;
}
int isFull(queue *q){
    if ((q->rear+1)%SIZE == q->front)
    return 1;
    return 0;
}
void enqueue(queue *q, int val){
    if(isFull(q)){
        printf("Queue is Full!\n");
        return;
    }
    q->arr[q->rear % SIZE] = val;
    q->rear++;
}
int dequeue(queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty!\n");
        return -1;
    }
    int val = q->arr[q->front % SIZE];
    q->front++;
    return val;
}
int getFront(queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty!\n");
        return -1;
    }
    return q->arr[(q->front + 1) % SIZE];
}
int getRear(queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty!\n");
        return -1;
    }
    return q->arr[q->rear];

}
int main(){
    queue q;
    init(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    printf("Front element: %d\n", getFront(&q));
    printf("Rear element: %d\n", getRear(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Front element after dequeue: %d\n", getFront(&q));
    return 0;
}
