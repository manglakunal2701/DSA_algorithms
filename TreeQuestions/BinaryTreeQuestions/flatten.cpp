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
void flatten(Node* root){
    if(root == NULL || root->left == NULL && root->right==NULL){
        return;
    }
    if(root->left!= NULL){
        flatten(root->left);
        Node *temp= root->right; //step 3
        root->right = root->left;//step 3 replace right with left
        root->left = NULL;

        Node* t= root->right;  //cal tail
        while(t->right!=NULL){
                t=t->right;
        }
        t->right=temp;// tail joined with root->right;
    }
    flatten(root->right);
}
void inorder(Node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    struct Node* root= new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right= new Node(5);
    root->left->left= new Node(4);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    flatten(root);
    inorder(root);
 
}