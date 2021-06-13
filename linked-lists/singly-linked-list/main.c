#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};



// Insert data at the end of SLL.
struct Node *insertAtEnd(struct Node *head, int data) {
    
    struct Node *result = head;

    // Create new node to store the data.
    struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
    if (tmp == NULL) {
        printf("Memory over.");
        exit(-1);
    }
    
    tmp->data = data;
    tmp->next = NULL;

    // If the given SLL is not empty
    if (head) {
       while (head->next)  {
           head = head->next;
       }
       head->next = tmp;
       return result;
    } else {
        // SLL is empty.
        head = tmp;
        return head;
    }
}

// Insert data at the front of SLL.
struct Node *insertAtFront(struct Node *head, int data) {
    struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
    if (tmp == NULL) {
        printf("Memory over.");
        exit(-1);
    }
    tmp->data = data;
    
    if (!head) {
        tmp->next = NULL;
        return tmp;
    } else {
        tmp->next = head;
        return tmp;
    }
}

// Print all the elements in the linked list.
void printSLL(struct Node *head) {
    while(head) {
        printf("%d ", head->data);
        head = head->next;
    }
}

// Get address of second last node of SLL.
struct Node *getSecondLastNodeAddress(struct Node *head) {
    if (!head) {
        return NULL;
    } else if (!head->next) {
        return NULL;
    } else {
        while (head->next->next) {
            head = head->next;
        }
        return head;
    }
}

// Insert a node with data x after node with data y.
struct Node *insertAfterData(struct Node *head, int data, int y) {

    struct Node *returnPointer = head;

    // If linked list is empty;
    if (!head) {
        return NULL;
    }

    // If first node is with data y.
    if (head->data == y) {

        struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
        if (tmp == NULL) {
            printf("Memory over.");
            exit(-1);
        }
        tmp->data = data;
        tmp->next = head;
        return tmp;
    }

    while (head->next != NULL && head->next->data != y) {
        head = head->next;
    }

    if (head->next && head->next->data == y) {

        struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
        if (tmp == NULL) {
            printf("Memory over.");
            exit(-1);
        }
        tmp->data = data;

        struct Node *tmp2 = head->next;
        head->next = tmp;
        tmp->next = tmp2;
    }
   
   return returnPointer;
}

int main() {

    struct Node *head = NULL;

    head = insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    printf("All nodes in a SLL:\n");
    printSLL(head);

    struct Node *secondLast = getSecondLastNodeAddress(head);
    printf("\n\nSecond last node in a SLL: %d\n", secondLast->data);

    head = insertAtFront(head, 0);
    printf("\nAll nodes in a SLL after inserting 0 at front:\n");
    printSLL(head);

    head = insertAfterData(head, 99, 20);
    printf("\n\nAll nodes in a SLL after inserting data after 20:\n");
    printSLL(head);


    return 0;
}