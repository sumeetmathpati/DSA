// In linked list find a node address where data x is present

#include <stdio.h>
#include <stdlib.h>


struct node {
    int val;
    struct node *next;
};

struct node* find_x(struct node *ptr, int x) {

    if (ptr == NULL) {
        printf("Linked list is empty!");
        exit(0);
    }

    if (ptr->val == x) {
        return ptr;
    }

    while (ptr->next != NULL) {
        if (ptr->next->val == x) {
            return ptr->next;
        }
    }
}

int main() {

    struct node *head = NULL;
    
    struct node *n1 = (struct node*)malloc(sizeof(struct node));
    n1->val = 1;
    struct node *n2 = (struct node*)malloc(sizeof(struct node));
    n2->val = 2;
    struct node *n3 = (struct node*)malloc(sizeof(struct node));
    n3->val = 3;
    struct node *n4 = (struct node*)malloc(sizeof(struct node));
    n4->val = 4;
    struct node *n5 = (struct node*)malloc(sizeof(struct node));
    n5->val = 5;

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    struct node *result = find_x(head, 1);
    printf("%u -> %d", result, result->val);

    


    return 0;    

}