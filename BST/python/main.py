class Node:

    def __init__(self, key):
        self.left = None
        self.right = None
        self.key = key
    
def printPreorder(root):

    if root:
        print(root.key)
        printInorder(root.left)
        printInorder(root.right)

def printInorder(root):

    if root:
        printInorder(root.left)
        print(root.key)
        printInorder(root.right)

def printPostorder(root):

    if root:
        printInorder(root.left)
        printInorder(root.right)
        print(root.key)
    
if __name__ == '__main__':

    root = Node(1) 
    root.left      = Node(2) 
    root.right     = Node(3) 
    root.left.left  = Node(4) 
    root.left.right  = Node(5) 

    print("Preorder traversal of binary tree is")
    printPreorder(root) 
    
    print("\nInorder traversal of binary tree is")
    printInorder(root) 
    
    print("\nPostorder traversal of binary tree is")
    printPostorder(root) 