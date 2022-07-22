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

void printSubtreeNodes(Node* root,int k){      //for nodes in subarray
    if(root==NULL || k<0){
        return ;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);
}
int printNodesAtk(Node* root,Node*target,int k){   //to pass the distance of ancestor from node and convert it in above case;
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtreeNodes(root,k);
        return 0;
    }
    int dl=printNodesAtk(root->left,target,k);
    if(dl!=-1){//target is in left part
            if(dl+1 ==k){
                cout<<root->data<< " ";
            }
            else{
                printSubtreeNodes(root->right,k-dl-2);  //root is ancestor
            }
            return 1+dl;

    }
     int dr=printNodesAtk(root->right,target,k);
    if(dr!=-1){//target is in left part
            if(dr+1 ==k){
                cout<<root->data<< " ";
            }
            else{
                printSubtreeNodes(root->left,k-dr-2);
            }
            return 1+dr;
    }
    return -1;
}
int main(){
    struct Node* root= new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right= new Node(5);
    root->left->left= new Node(4);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
     printNodesAtk(root,root->right->left,2);
   
}