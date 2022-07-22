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
Node* balancedTree(int arr[],int left,int right){
    if(left>right){
        return NULL;
    }
    int mid= (left+right)/2;
    Node* root= new Node(arr[mid]);
    root->left= balancedTree(arr,left,mid-1);
    root->right= balancedTree(arr,mid+1,right);
    return root;

}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
     cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[]={10,20,30,40,50};
    Node* root= balancedTree(arr,0,4);
    preorder(root);
}