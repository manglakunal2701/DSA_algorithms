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
Node* insertNode(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left= insertNode(root->left,val);
    }
    else{
        root->right= insertNode(root->right,val);
    }
    return root;
}
Node* searchInBST(Node* root,int key){

    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key < root->data){
        return searchInBST(root->left,key);
    }
    else{
        return searchInBST(root->right,key);
    }
    
}
int main(){
    struct Node* root=NULL;
    root = insertNode(root,5);
    insertNode(root,1);
    insertNode(root,3);
    insertNode(root,4);
    insertNode(root,2);
    insertNode(root,7);
    inorder(root);
    cout<<endl;
    if(searchInBST(root,9)){
        cout<<"Key Exist"<<endl;
    }
    else{
        cout<<"Node Not Found"<<endl;
    }
}