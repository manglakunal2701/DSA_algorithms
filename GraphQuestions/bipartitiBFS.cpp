#include <bits/stdc++.h>
using namespace std;
int bipartiteBFS(int src,vector<int>adj[],vector<int> &color){
    queue<int> q;
    q.push(src);
    color[src]=0;
    while(!q.empty()){
        int node= q.front();
        q.pop();
        for(auto it:adj[node]){
            if(color[it]==-1){
                color[it]= 1-color[node];
                q.push(it);
            }else if(color[it]==color[node]){
                return false;
            }
        }
    }
    return true;
}
bool checkBipertite(vector<int>adj[],int n){
    vector<int> color(n,-1);
    for(int i=1;i<n;i++){
        if(color[i]==-1){
            if(!bipartiteBFS(i,adj,color)){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n,m;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;
    vector<int>arr[n+1];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x;
        cin>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(auto it:arr[i]){
            cout<<it <<" ";
        }cout<<endl;
    }
   int res= checkBipertite(arr,n+1);
   if(res==0){
       cout<<"Not bipartite"<<endl;
   }
   else{
       cout<<" Bipartite"<<endl;
   }
}