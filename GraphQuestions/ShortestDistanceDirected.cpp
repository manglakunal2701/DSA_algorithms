#include <bits/stdc++.h>
using namespace std;
void findTopoSort(int node,stack<int>&s,vector<int>&vis,vector<pair<int,int>>adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it.first]){
            findTopoSort(it.first,s,vis,adj);
        }
    }
    s.push(node);//////No path from this node hence add it in stack
}
void shortestPath(int src,int V,vector<pair<int,int>>adj[]){
    vector<int>vis(V,0);
    stack<int>s;
     for(int i=1;i<V;i++){
        if(!vis[i]){
            findTopoSort(i,s,vis,adj);
        }
    }
    vector<int>dist(V,INT_MAX);
    dist[src]=0;
    while(!s.empty()){
        int node=s.top();
        s.pop();
        if(dist[node]!=INT_MAX){
            for(auto it:adj[node]){
                if(dist[node]+it.second < dist[it.first]){
                    dist[it.first]=dist[node]+it.second;
                }
            }
        }
    }
    for(int i=1;i<V;i++){
        (dist[i]==INT_MAX)?cout<<"INF"<<endl:cout<<dist[i]<<" "<<endl;
    }
}
int  main(){
   cout<<"enter the nodes of graph"<<endl;
   int n,m;
   cin>>n;
   cout<<"Enter the number of edges of graph"<<endl;
   cin>>m;
   vector<pair<int,int>> arr[n+1];
   for(int i=0;i<m;i++){
       int u,v,wt;
       cin>>u;
       cin>>v;
       cin>>wt;
       arr[u].push_back({v,wt});
   }
   for(int i=1;i<n+1;i++){
       cout<<i<<"->";
       for(auto it=arr[i].begin();it!=arr[i].end();it++){
           cout<<"{"<<it->first<<" "<<it->second<<"}";
       }cout<<endl;
   }
   shortestPath(1,n+1,arr);
    
 }
   

