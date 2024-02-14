
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct poly {
    int data;
    struct poly* next;
} mono;

// Function to append a new node at the end of the list
void append(struct poly** head_ref, int new_data) {
    // Allocate memory for the new node
    struct poly* mono = (struct poly*)malloc(sizeof(struct poly));
    struct poly* last = *head_ref;  // Temporary pointer to head

    // Assign the data and set next as NULL for the new node
    mono->data = new_data;
    mono->next = NULL;

    // If the linked list is empty, make the new node as head
    if (*head_ref == NULL) {
        *head_ref = mono;
        return;
    }

    // Otherwise, traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }

    // Change the next of the last node
    last->next = mono;
    return;
}

// Function to create a linked list from command line arguments
struct poly* create_linked_list(int argc, char* argv[]) {
    struct poly* head = NULL;

    // Start from index 1 to skip the program name
    for (int i = 1; i < argc; i++) {
        int data = atoi(argv[i]); // Convert command line argument to integer
        append(&head, data);
    }

    return head;
}

// Function to print the linked list
void print_linked_list(struct poly* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Main function
int main(int argc, char* argv[]) {
    // Create a linked list with command line arguments
    struct poly* head = create_linked_list(argc, argv);

    // Print the linked list
    printf("Linked list created: ");
    print_linked_list(head);

    return 0;
}
