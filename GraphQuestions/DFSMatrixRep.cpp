#include <bits/stdc++.h>
using namespace std;
void printDFS(int node,vector<vector<int>>adj,int n,vector<int>&res,vector<int>&vis){
    res.push_back(node);
    vis[node]=1;
    for(int i=1;i<n+1;i++){
        if(adj[node][i]==1){
            if(!vis[i]){
                printDFS(i,adj,n,res,vis);
            }
        }
    }
    
}
void DFS(vector<vector<int>>arr,vector<int>&res,int n){
    vector<int>vis(n,0);
    for(int i=1;i<n;i++){
        if(!vis[i]){
            printDFS(i,arr,n,res,vis);
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>>arr(n+1,vector<int>(n+1));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix entered is:"<<endl;
     for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    vector<int>res;
    DFS(arr,res,n+1);
    if(res.size()==0){
        cout<<"path not exist"<<endl;
    }
    else{
       cout<<"path Exist:"<<endl;
        for(int i=0;i<res.size();i++){
        cout<<res[i]<<"->";
        }
    }
   
}