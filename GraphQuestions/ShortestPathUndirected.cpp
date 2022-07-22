#include <bits/stdc++.h>
using namespace std;
vector<int> BFS(int V, vector<int> arr[],int src){
      vector<int>dist(V,INT_MAX);
      queue < int > q;
      q.push(src);
      dist[src] = 0;
      while (!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto it:arr[node]){
          if(dist[node]+1<dist[it]){
            dist[it]=dist[node]+1;
            q.push(it);
          }
        }
      } 
      return dist;
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
   
   cout<<"Enter the source node"<<endl;
   int sc;
   cin>>sc;
    vector<int> res=BFS(n+1,arr,sc);
    for(int i=1;i<res.size();i++){
        cout<<res[i]<<"->";
    }    
 }
   

