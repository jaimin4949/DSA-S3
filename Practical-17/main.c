#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NODES 26 // For alphabets A-Z

// Structure to represent a node in the adjacency list
typedef struct Node {
    char data;
    struct Node* next;
} Node;

// Graph structure
typedef struct Graph {
    Node* adjList[MAX_NODES];
    int visited[MAX_NODES];
} Graph;

// Function to create a new node
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Initialize the graph
void initializeGraph(Graph* graph, int numNodes) {
    for (int i = 0; i < MAX_NODES; i++) {
        graph->adjList[i] = NULL;
        graph->visited[i] = 0;
    }
}

// Add an edge to the graph
void addEdge(Graph* graph, char src, char dest) {
    int srcIdx = src - 'A';
    Node* newNode = createNode(dest);
    newNode->next = graph->adjList[srcIdx];
    graph->adjList[srcIdx] = newNode;
}

// DFS function
void DFS(Graph* graph, char start) {
    int startIdx = start - 'A';
    graph->visited[startIdx] = 1;
    printf("%c ", start);

    Node* temp = graph->adjList[startIdx];
    while (temp != NULL) {
        int neighborIdx = temp->data - 'A';
        if (!graph->visited[neighborIdx]) {
            DFS(graph, temp->data);
        }
        temp = temp->next;
    }
}

int main() {
    Graph graph;
    int numNodes, numEdges;
    char src, dest, start;

    // Input number of nodes and edges
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    // Initialize the graph
    initializeGraph(&graph, numNodes);

    // Input the edges
    printf("Enter the edges (e.g., A B for an edge from A to B):\n");
    for (int i = 0; i < numEdges; i++) {
        getchar(); // Consume the newline character
        printf("Edge %d: ", i + 1);
        scanf("%c %c", &src, &dest);
        addEdge(&graph, src, dest);
    }

    // Input the starting node
    getchar(); // Consume the newline character
    printf("Enter the starting node: ");
    scanf("%c", &start);

    // Perform DFS traversal
    printf("DFS Traversal Path: ");
    DFS(&graph, start);
    printf("\n");

    return 0;
}