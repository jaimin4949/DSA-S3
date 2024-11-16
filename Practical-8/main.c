#include<stdio.h>
#include<stdlib.h>

// Define the structure for the linked list node
struct Node {
    int data;
    struct Node *next;
};

// Function to display the linked list
void displayList(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;
    int n, data, i;

    // Input the number of nodes
    printf("Input the number of nodes: ");
    scanf("%d", &n);

    // Create the linked list based on the input
    for(i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        if(newNode == NULL) {
            printf("Memory allocation failed\n");
            return -1;
        }

        // Input data for the current node
        printf("Input data for node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL) {
            // If this is the first node, set it as the head
            head = newNode;
            temp = head;
        } else {
            // Otherwise, link the new node to the previous one
            temp->next = newNode;
            temp = temp->next;
        }
    }

    // Display the data in the linked list
    printf("Data entered in the list:\n");
    displayList(head);

    return 0;
}



