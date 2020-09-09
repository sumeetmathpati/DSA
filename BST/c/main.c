#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};

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
int getLevels (struct node *root) {
    if (root == NULL) {
        return 0;
    } else {
        int lheight = getLevels(root->left);
        int rheight = getLevels(root->right);

        if (lheight > rheight) {
            return lheight + 1;
        } else {
            return rheight + 1;
        }
    }

}

int printGivenLevel(struct node *root, int level) {
    if (root == NULL) {
        return 0;
    }

    if (level == 1) {
        printf("%d ", root->data);
    } else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }

    return 0;
}

void printLevelOrder(struct node *root) {
    int l = getLevels(root);
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
int mirror(struct node *root) {

    if (root == NULL) {
        return 0;
    } else {
        struct node *temp;

        mirror(root->left);
        mirror(root->right);

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }

}

struct node *search(struct node *root, int value) {

    if (root == NULL) {
        return 0;
    }

    if (root->data == value) {
        return root;
    } else if (root->data > value) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
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

    struct node *tmp = search(root, 4);
    if (tmp) {
        printf("\nElement 4 is found in a tree\n");
    } else {
        printf("\nElement 4 not found in a tree\n");
    }

    return 0;

}