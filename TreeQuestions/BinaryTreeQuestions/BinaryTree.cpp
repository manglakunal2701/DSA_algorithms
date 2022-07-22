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
int countOfNodes(Node* root)
{
    if(root==NULL){
        return 0;
    }
    return countOfNodes(root->left)+countOfNodes(root->right)+1;
}
int sumOfNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumOfNodes(root->left)+sumOfNodes(root->right)+root->data;
}
int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);
    return max(lHeight,rHeight)+1;

}
int diameterOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftDiameter= diameterOfTree(root->left);
    int rightDiameter= diameterOfTree(root->right);
    int curr=heightOfTree(root->left)+heightOfTree(root->right);
  
    return max(curr,max(leftDiameter,rightDiameter));
}

int main(){
    struct Node* root= new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right= new Node(5);
    root->left->left= new Node(4);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
//    inorder(root); 
    //cout<<countOfNodes(root);
    //cout<<sumOfNodes(root);               
    //cout<<heightOfTree(root);               //max of left height and right height +1    
    cout<<diameterOfTree(root);            //largest distance between two nodes
}