#include<iostream>
using namespace std;
struct Node
{
   struct Node* left;
   struct Node* right;
   int data;
   Node(int i){
        data=i;
        left=NULL;
        right=NULL;
   }
};
void inorder(Node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool check(Node* root,Node* min=NULL,Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <= min->data){   //all elements should be greater than min for true
        return false;
    }
    if(max!=NULL && root->data >= max->data){   //all elements should be less than max for true 
        return false;
    }
    bool checkleft = check(root->left,min,root);
    bool checkright = check(root->right,root,max);

    return checkleft && checkright;
}
int main(){
    struct Node* root= new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->right= new Node(5);
    root->left->left= new Node(1);
    root->right->right= new Node(7);
    inorder(root);
    cout<<endl;
    if(check(root,NULL,NULL)){
        cout<<"BST is valid"<<endl;
    }
    else{
        cout<<"BST is NOT valid"<<endl;
    }
}