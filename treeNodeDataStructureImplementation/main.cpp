#include <iostream>

// Definition of a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the binary tree
TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function for in-order traversal of the binary tree
void inOrderTraversal(TreeNode* root) 
{
    if (root != nullptr) {
        inOrderTraversal(root->left);
        std::cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    // Creating an empty binary tree
    TreeNode* root = nullptr;

    // Inserting nodes into the binary tree
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 8);

    // Performing in-order traversal to print the tree elements
    std::cout << "In-Order Traversal: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;
}