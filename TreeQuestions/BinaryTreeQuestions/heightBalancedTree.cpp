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
int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);
    return max(lHeight,rHeight)+1;

}
bool isBalanced(Node *root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh=heightOfTree(root->left);    
    int rh=heightOfTree(root->right);    

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
bool isBalanced2(Node* root,int* height){
    int lh=0,rh=0;
    if(root==NULL){
        return true;
    }
    if(isBalanced2(root->left,&lh)==false){
        return false;
    }
    if(isBalanced2(root->right,&rh)==false){
        return false;
    }
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
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
    
    // if(isBalanced(root)){                 //time complexity is O(n^2);
    //     cout<<"Balanced"<<endl;
    // }
    // else{
    //     cout<<"Not Balanced"<<endl;
    // }
    int height=0;
    if(isBalanced2(root,&height)){                 //time complexity is O(n);because we are not calling height function inside balanced function;
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    
}