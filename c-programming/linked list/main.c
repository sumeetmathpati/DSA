#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int insertData(struct node **head, int data) {

    struct node *tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = data;

    if (*head == NULL) {
        *head = tmp;
    } else {
        tmp->next = *head;
        *head = tmp;
    }    

    return 0;
}

void display_ll(struct node *head) {

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}


int main() {

    struct node *head = NULL;

    insertData(&head, 1);
    insertData(&head, 2);
    insertData(&head, 3);
    insertData(&head, 4);
    insertData(&head, 5);
    insertData(&head, 6);

    display_ll(head);

    return 0;
}
