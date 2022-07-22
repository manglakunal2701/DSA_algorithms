#include <bits/stdc++.h>
using namespace std;
bool bipartiteDFS(int src,vector<int>adj[],vector<int> &color){
        for(auto it:adj[src]){
            if(color[it]==-1){
                color[it]= 1-color[src];
               if( !bipartiteDFS(it,adj,color)){
                   return false;
               }
            }else if(color[it]==color[src]){
                return false;
            }
        }
    return true;
}
bool checkBipertite(vector<int>adj[],int n){
    vector<int> color(n,-1);
    for(int i=1;i<n;i++){
        if(color[i]==-1){
            color[i]=0;
            if(!bipartiteDFS(i,adj,color)){
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