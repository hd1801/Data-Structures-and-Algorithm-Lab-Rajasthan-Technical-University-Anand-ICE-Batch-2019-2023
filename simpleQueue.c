#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int rear;
    int front;
    int *arr;
};
void createqueue(struct Queue *q,int n)
{   
    q->size=n;
    q->rear=q->front=1;
    q->arr= (struct Queue*) malloc(sizeof(struct Queue));
    
}
