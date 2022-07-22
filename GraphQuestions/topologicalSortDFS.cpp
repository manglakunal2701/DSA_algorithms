#include <bits/stdc++.h>
using namespace std;
void dfs(int node,stack<int>&s,vector<int>&vis,vector<int>adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,s,vis,adj);
        }
    }
    s.push(node);//////No path from this node hence add it in stack
}
vector<int> dfsOfGraph(int V,vector<int>adj[]){
    vector<int>res;
    stack<int>s;
    vector<int>vis(V,0);
    for(int i=1;i<V;i++){
        if(!vis[i]){
            dfs(i,s,vis,adj);
        }
    }
    while(!s.empty()){
        res.push_back(s.top());
        s.pop();
    }
    return res;
}
int  main(){
   cout<<"enter the nodes of graph"<<endl;
   int n,m;
   cin>>n;
   cout<<"Enter the number of edges of graph"<<endl;
   cin>>m;
   vector<int> arr[n+1];
   for(int i=0;i<m;i++){
       int u,v;
       cin>>u;
       cin>>v;
       arr[u].push_back(v);
            //remove this for directed gragh;
   }
   for(int i=1;i<n+1;i++){
       cout<<i<<"->";
       for(int x:arr[i]){
           cout<<x<<" ";
       }cout<<endl;
   }
    vector<int> res=dfsOfGraph(n+1,arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }    
 }