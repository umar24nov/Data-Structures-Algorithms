#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertInBST(Node* root, int val){
    if(root == NULL) return new Node(val);
    else if(root->val > val)
    root->left = insertInBST(root->left,val);
    else{
        root->right = insertInBST(root->right,val);
    }
    return root;
}

void displayTree(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

int main (){

    Node* a = NULL;
    
    a = insertInBST(a,5);
    a = insertInBST(a,3);
    a = insertInBST(a,7);
    a = insertInBST(a,2);
    a = insertInBST(a,9);

    cout << "Nodes In BST: ";
    displayTree(a);
    cout << endl;
    return 0;
}