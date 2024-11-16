#include <stdio.h>
#include <stdlib.h>

// Definition of a Node in the Doubly Linked List
struct ListNode {
    int value;
    struct ListNode* previous;
    struct ListNode* next;
};

// Function to create a new node
struct ListNode* createNewNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->value = value;
    newNode->previous = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node at the end of the list
void addNodeAtEnd(struct ListNode** head_ptr, int value) {
    struct ListNode* newNode = createNewNode(value);
    struct ListNode* current = *head_ptr;

    if (*head_ptr == NULL) {
        *head_ptr = newNode;
        return;
    }

    while (current->next != NULL)
        current = current->next;

    current->next = newNode;
    newNode->previous = current;
}

// Function to print the doubly linked list
void displayList(struct ListNode* current) {
    printf("NULL > ");
    while (current != NULL) {
        printf("%d > ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct ListNode* start = NULL;
    int count, element;

    // Taking input for the number of elements
    printf("Enter the number of nodes: ");
    scanf("%d", &count);

    // Taking input for each element
    for (int i = 0; i < count; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &element);
        addNodeAtEnd(&start, element);
    }

    // Display the list
    displayList(start);

    return 0;
}
