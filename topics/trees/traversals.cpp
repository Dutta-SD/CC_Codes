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

void processCurrentNode(const int data) {
    cout << data << ' ';
}

template <typename T>
void printVector(vector<T> vec) {
    for (T e : vec) cout << e << ' ';
    cout << '\n';
}

/* Traversals in Trees */
void preOrderTraverseRecursively(const BinaryTreeNode *root) {
    if (!root) return;
    processCurrentNode(root->data);
    preOrderTraverseRecursively(root->left);
    preOrderTraverseRecursively(root->right);
}

void postOrderTraverse(const BinaryTreeNode *root) {
    if (!root) return;
    postOrderTraverse(root->left);
    postOrderTraverse(root->right);
    processCurrentNode(root->data);
}

void inOrderTraverseRecursively(const BinaryTreeNode *root) {
    if (!root) return;
    inOrderTraverseRecursively(root->left);
    processCurrentNode(root->data);
    inOrderTraverseRecursively(root->right);
}

vector<int> preOrderTraverseNoRecursion(BinaryTreeNode *root) {
    vector<int> nodeTraversalList;
    if (!root) return nodeTraversalList;

    stack<BinaryTreeNode *> nodeStack;
    BinaryTreeNode *currentNode;
    nodeStack.push(root);

    while (!nodeStack.empty()) {
        currentNode = nodeStack.top();
        nodeStack.pop();
        nodeTraversalList.push_back(currentNode->data);
        if (currentNode->right) {
            nodeStack.push(currentNode->right);
        }
        if (currentNode->left) {
            nodeStack.push(currentNode->left);
        }
    }
    return nodeTraversalList;
}

vector<int> inOrderTraversalNoRecursion(BinaryTreeNode *root) {
    vector<int> nodeTraversalList;
    stack<BinaryTreeNode *> nodeStack;
    BinaryTreeNode *currentNode = root;

    while (true) {
        if (currentNode) {
            nodeStack.push(currentNode);
            currentNode = currentNode->left;
        } else {
            if (nodeStack.empty()) break;
            currentNode = nodeStack.top();
            nodeStack.pop();
            nodeTraversalList.push_back(currentNode->data);
            currentNode = currentNode->right;
        }
    }
    return nodeTraversalList;
}

void comparePreOrderTraversals(BinaryTreeNode *root) {
    cout << "PRE ORDER WITH RECURSION\n";
    preOrderTraverseRecursively(root);
    cout << "\nPRE ORDER WITHOUT RECURSION\n";
    printVector(preOrderTraverseNoRecursion(root));
}

void compareInOrderTraversals(BinaryTreeNode *root) {
    cout << "IN ORDER WITH RECURSION\n";
    inOrderTraverseRecursively(root);
    cout << "\nIN ORDER WITHOUT RECURSION\n";
    printVector(inOrderTraversalNoRecursion(root));
}

int main() {
    BinaryTreeNode *root = makeSampleTree();
    compareInOrderTraversals(root);
    comparePreOrderTraversals(root);
    return 0;
}
