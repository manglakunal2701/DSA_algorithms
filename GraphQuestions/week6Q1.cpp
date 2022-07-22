#include <bits/stdc++.h>
using namespace std;
void dfs(int i,vector<int>&vis,vector<int>arr[]){
    vis[i]=1;
    for(auto it:arr[i]){
        if(!vis[it]){
            dfs(it,vis,arr);
        }
    }
}
void checkPath(vector<int>arr[],int n,int src,int dest){
    vector<int>vis(n,0);
    dfs(src,vis,arr);
    int i;
    for( i=0;i<n;i++){
        if(vis[dest]==0){
            cout<<"Path does not exist "<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"path exist"<<endl;
}
int main(){
    int n,m;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    cout<<"ENter the number of edges"<<endl;
    cin>>m;
    vector<int>arr[n+1];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        arr[y].push_back(x);
        arr[x].push_back(y);
    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(auto it:arr[i]){
            cout<<it<<" ";
        }cout<<endl;
    }
    int src,dest;
    cout<<"enter the src node and destination node"<<endl;
    cin>>src>>dest;
    checkPath(arr,n+1,src,dest);
}