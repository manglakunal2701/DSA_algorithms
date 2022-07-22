#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V,vector<int> adj[]){
    vector < int > indegree(V,0);
    queue<int>q;
    for(int i=1;i<V;i++)
    {
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    for(int i=1;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    return topo;
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
    vector<int> res=topoSort(n+1,arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }    
 }
   

