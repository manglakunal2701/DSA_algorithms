#include <bits/stdc++.h>
using namespace std;
bool checkForCycle(int i,int V,vector<int>&vis,vector<int>adj[]){
    queue<pair<int,int>>q;
    q.push({i,-1});
    vis[i]=1;
    while(!q.empty()){
        int node= q.front().first;
        int parent= q.front().second;
        q.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push({it,node});
            }
            else if(parent!=it){
                cout<<node<<endl;
                return true;
            }
        }
    }
    return false;
}
bool detectCycle(int V,vector<int>adj[]){
    vector<int>vis(V,0);
    for(int i=1;i<V;i++){
        if(vis[i]==0){
            if(checkForCycle(i,V,vis,adj)){
                return true;
            }
        }
    }
    return false;
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
       arr[v].push_back(u);     //remove this for directed gragh;
   }
   for(int i=1;i<n+1;i++){
       cout<<i<<"->";
       for(int x:arr[i]){
           cout<<x<<" ";
       }cout<<endl;
   }
    int res=detectCycle(n+1,arr);
    if(res==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
        
 }
   

