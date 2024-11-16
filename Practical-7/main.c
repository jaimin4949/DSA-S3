#include <stdio.h>

// Function to solve the Tower of Hanoi problem
void tower_of_hanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If there is only one disk, move it from source to destination
    if (n == 1) {
        printf("Top Disk moved from %c to %c\n", source, destination);
        return;
    }
    
    // Move n-1 disks from source to auxiliary using destination as the auxiliary rod
    tower_of_hanoi(n - 1, source, auxiliary, destination);
    
    // Move the top disk from source to destination
    printf("Top Disk moved from %c to %c\n", source, destination);
    
    // Move the n-1 disks from auxiliary to destination using source as the auxiliary rod
    tower_of_hanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Rods are represented as 'A', 'B', 'C'
    tower_of_hanoi(n, 'A', 'B', 'C');
    
    return 0;
}
