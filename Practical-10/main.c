#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *createQueue(int data)
{
    struct queue *newQueue = (struct queue *)malloc(sizeof(struct queue));
    newQueue->data = data;
    newQueue->next = NULL;
    return newQueue;
}

struct queue *head = NULL;

void enqueue(int data)
{
    struct queue *newQueue = createQueue(data);

    if (head == NULL)
    {
        head = newQueue;
        return;
    }

    struct queue *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = newQueue;
}

void dequeue()
{
    if (head == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    struct queue *temp = head;
    head = head->next;
    free(temp);
}

void display()
{
    struct queue *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    dequeue();
    display();
}