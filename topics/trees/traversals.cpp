#include <bits/stdc++.h>
using namespace std;

struct BinaryTreeNode {
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int const value) {
        data = value;
        left = right = nullptr;
    }
};

BinaryTreeNode *makeSampleTree() {
    BinaryTreeNode *root = new BinaryTreeNode(1);
    root->left = new BinaryTreeNode(2);
    root->right = new BinaryTreeNode(3);
    root->left->left = new BinaryTreeNode(4);
    root->left->right = new BinaryTreeNode(5);

    root->right->left = new BinaryTreeNode(6);
    root->right->right = new BinaryTreeNode(7);

    root->left->left->left = new BinaryTreeNode(8);
    root->left->left->right = new BinaryTreeNode(9);

    // Continue adding more nodes
    root->left->right->left = new BinaryTreeNode(10);
    root->left->right->right = new BinaryTreeNode(11);

    root->right->left->left = new BinaryTreeNode(12);
    root->right->left->right = new BinaryTreeNode(13);

    // Add more nodes to reach a total of 20 nodes
    root->right->right->left = new BinaryTreeNode(14);
    root->right->right->right = new BinaryTreeNode(15);

    root->left->left->left->left = new BinaryTreeNode(16);
    root->left->left->left->right = new BinaryTreeNode(17);

    root->left->left->right->left = new BinaryTreeNode(18);
    root->left->left->right->right = new BinaryTreeNode(19);

    root->right->left->left->left = new BinaryTreeNode(20);

    return root;
}

void processCurrentNode(int data) {
    cout << " " << data;
}

/* Traversals in Trees */
void preOrderTraverse(BinaryTreeNode *root) {
    if (!root) return;
    processCurrentNode(root->data);
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
}

void postOrderTraverse(BinaryTreeNode *root) {
    if (!root) return;
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
    processCurrentNode(root->data);
}

void inOrderTraverse(BinaryTreeNode *root) {
    if (!root) return;
    preOrderTraverse(root->left);
    processCurrentNode(root->data);
    preOrderTraverse(root->right);
}

int main(int argc, char const *argv[]) {
    BinaryTreeNode *root = makeSampleTree();
    preOrderTraverse(root);
    cout << '\n';
    postOrderTraverse(root);
    cout << '\n';
    inOrderTraverse(root);
    cout << '\n';
    return 0;
}
