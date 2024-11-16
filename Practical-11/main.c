#include <stdio.h>
#include <stdlib.h>

// Define the structure for a queue node
struct queue
{
    int data;            // Data part of the node
    struct queue *next;  // Pointer to the next node
};

// Initialize the head of the queue to NULL
struct queue *head = NULL;

// Forward declaration of the createQueue function
struct queue *createQueue(int data);

// Function to add an element to the end of the queue
void enqueue(int data)
{
    // Create a new queue node
    struct queue *newQueue = createQueue(data);

    // If the queue is empty, set the new node as the head
    if (head == NULL)
    {
        head = newQueue;
        return;
    }

    // Traverse to the end of the queue
    struct queue *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    // Add the new node at the end of the queue
    last->next = newQueue;
}

// Function to create a new queue node
struct queue *createQueue(int data)
{
    // Allocate memory for the new node
    struct queue *newQueue = (struct queue *)malloc(sizeof(struct queue));
    newQueue->data = data;  // Set the data
    newQueue->next = NULL;  // Initialize the next pointer to NULL
    return newQueue;
}

// Function to remove an element from the front of the queue
void dequeue()
{
    // If the queue is empty, print a message and return
    if (head == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    // Remove the head node and update the head pointer
    struct queue *temp = head;
    head = head->next;
    free(temp);  // Free the memory of the removed node
}

// Function to display the elements of the queue
void display()
{
    struct queue *temp = head;
    // Traverse the queue and print each element
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");  // Indicate the end of the queue
}

int main()
{
    // Enqueue elements into the queue
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    // Display the queue
    display();

    // Dequeue an element from the queue
    dequeue();

    // Display the queue again
    display();

    return 0;
}
