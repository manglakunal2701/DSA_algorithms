#include<iostream>
#include<algorithm>
#include <climits>
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
Node * constructBST(int preorder[],int* preorderIdx,int key,int min,int max,int n){
    if(*preorderIdx>=n){
        return NULL;
    }
    Node *root=NULL;
    if(key>min && key<max){
        root=new Node(key);
        *preorderIdx=*preorderIdx+1;
        if(*preorderIdx<n){
            root->left = constructBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
        }
         if(*preorderIdx<n){
            root->right = constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
        }

    }
    return root;
} 
void printPreorder(Node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
    

}
int main(){
    int preorder[]={7,5,4,8};
    int n=4;
    int preorderIdx=0;
    Node*root=constructBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
    printPreorder(root);
}