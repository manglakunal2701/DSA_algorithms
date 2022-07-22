#include<iostream>
#include<stack>
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
void zigzagTraversal(Node* root){
    if(root==NULL)return;//base condition
    stack<Node*> currLevel;
    stack<Node*> nextLevel;
    bool leftToRight = true;
    currLevel.push(root);
    while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        //Now push temp childs in nextlevel;
        //push left to right;
                if(leftToRight){
                    if(temp->left){
                        nextLevel.push(temp->left);
                    }
                    if(temp->right){
                        nextLevel.push(temp->right);
                    }
                }//now right to left
                else{
                    if(temp->right){
                        nextLevel.push(temp->right);
                    }
                    if(temp->left){
                        nextLevel.push(temp->left);
                    }
                }
        //now change value of leftoright and change the values of current stak and next stack;
        }
        if(currLevel.empty()){
            leftToRight=!leftToRight;
            swap(currLevel,nextLevel);
        }
        
    }
}
int main(){
       struct Node* root= new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->right= new Node(10);
    root->left->left= new Node(5);
    zigzagTraversal(root);
    cout<<endl;
    return 0;
}
