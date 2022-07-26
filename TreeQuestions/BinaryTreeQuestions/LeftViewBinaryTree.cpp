#include<iostream>
#include<queue>
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
void printRightView(Node*root){
    if(root==NULL)
    {
        return;
    }
    else{
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();   //no of nodes in current level
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                if(i==n-1){
                    cout<<curr->data<<" ";
                }
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }
        
    }
}
void printLeftView(Node*root){
    if(root==NULL)
    {
        return;
    }
    else{
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();   //no of nodes in current level
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                if(i==0){
                    cout<<curr->data<<" ";
                }
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }
        
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
    printRightView(root);
    printLeftView(root);

   
}