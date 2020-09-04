#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data);
void printPreorder(struct node *root);
void printInorder(struct node *root);
void printPostorder(struct node *root);
int levels (struct node *root);
void printGivenLevel(struct node *root, int level);
void printLevelOrder(struct node *root);

struct node *newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node)); 
    
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;    
}

void printPreorder(struct node *root) {
    if (root == NULL) {
        return ;
    }

    printf("%d ", root->data);
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(struct node *root) {
    if (root == NULL) {
        return ;
    }

    printInorder(root->left);
    printf("%d ", root->data); 
    printInorder(root->right);
}

void printPostorder(struct node *root) {
    if (root == NULL) {
        return ;
    }

    printInorder(root->left);
    printInorder(root->right);
    printf("%d ", root->data); 
}

// Find level of a tree. Height of a tree is level - 1
int levels (struct node *root) {
    if (root == NULL) {
        return ;
    } else {
        int lheight = levels(root->left);
        int rheight = levels(root->right);

        if (lheight > rheight) {
            return lheight + 1;
        } else {
            return rheight + 1;
        }
    }

}

void printGivenLevel(struct node *root, int level) {
    if (root == NULL) {
        return ;
    }

    if (level == 1) {
        printf("%d ", root->data);
    } else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void printLevelOrder(struct node *root) {
    int l = levels(root);
    for(int i = 1; i <= l; i++) {
        printGivenLevel(root, i);
    }
}

// Count leaf nodes
int getLeafCount(struct node *root) {

    if (root == NULL) {
        return 0;
    } 

    if (root->left == NULL && root->right == NULL) {
        return 1; 
    } else {
        return getLeafCount(root->left) + getLeafCount(root->right);
    }

}

// Mirrors the given tree
void mirror(struct node *root) {

    if (root == NULL) {
        return ;
    } else {
        struct node *temp;

        mirror(root->left);
        mirror(root->right);

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }

}


int main() {

    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    printf("Preorder:\n\t");
    printPreorder(root);
    printf("\nInorder:\n\t");
    printInorder(root);
    printf("\nPostorder:\n\t");
    printPostorder(root);
    printf("\nLevel order:\n\t");
    printLevelOrder(root);
    printf("\nNumber of leaves in trees are: %d", getLeafCount(root));
    printf("\nMirror inorder:\n\t");
    mirror(root);
    printInorder(root);
    return 0;

}