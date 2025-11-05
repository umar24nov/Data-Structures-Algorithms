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

void displayTree(Node* root){
    if(root ==  NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}


Node *insertInBST(Node *root, int val){
    if (root == NULL)
        return new Node(val);
    else if (root->val > val){ // go left
            root->left = insertInBST(root->left, val);
        } 
    else{ // root->val < val : go right
        root->right = insertInBST(root->right, val);
    }
    return root;
}

int main(){
    Node* a = NULL;

    // InsertInBST
    a = insertInBST(a, 1);
    a = insertInBST(a, 9);
    a = insertInBST(a, 5);
    a = insertInBST(a, 7);
    a = insertInBST(a, 8);
    a = insertInBST(a, 3);


    cout << "BST In-Order traversal: ";
    displayTree(a);
    cout << endl;


    return 0;

}