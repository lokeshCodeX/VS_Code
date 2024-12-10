#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void insertIntoBst(Node*& root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return;
    }

    if (data < root->data) {
        insertIntoBst(root->left, data); // Recur to the left
    } else {
        insertIntoBst(root->right, data); // Recur to the right
    }
}

Node* makeBst() {
    Node* root = NULL;
    int data;

    cout << "Enter data (-1 to stop): ";
    cin >> data;
    while (data != -1) {
        insertIntoBst(root, data);
        cin >> data;
    }

    return root;
}

void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = makeBst();
    
    cout << "Inorder Traversal of BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
