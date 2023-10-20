#include <bits/stdc++.h>
using namespace std;

struct BinaryTreeNode
{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int const value)
    {
        data = value;
        left = right = nullptr;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    BinaryTreeNode *root = new BinaryTreeNode(1);
    root->left = new BinaryTreeNode(2);
    root->right = new BinaryTreeNode(3);

    cout << "OK";

    return 0;
}
