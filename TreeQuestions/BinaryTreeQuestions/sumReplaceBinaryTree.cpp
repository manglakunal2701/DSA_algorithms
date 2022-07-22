#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int i){
            data = i;
            left=NULL;
            right=NULL;
    }
};
void inorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void sumReplace(Node* root){
     if(root==NULL){
        return ;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }

}
int main(){
    struct Node* root= new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right= new Node(5);
    root->left->left= new Node(4);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
     inorder(root) ; 
    cout<<endl;
     sumReplace(root);     // replace the sum of root with its value and left node and right node sum;
     inorder(root); 
}