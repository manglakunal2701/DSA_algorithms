#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int rank[1000];
void makeSet(int n){
    for(int i=0;i<=n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int findPar(int n){
    if(n == parent[n]){
        return n;
    }
    return parent[n]= findPar(parent[n]);
}    
void union(int u,int v){
    u=findPar(u);
    v=findPar(v);
    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[u]>rank[v]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}
int main(){
    int m,n;
    cout<<"enter no of operations"<<endl;
    cin>>m;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    makeSet(n);
    while(m--){
        int x,y;
        cout<<"Enter the two nodes to do union:"<<endl;
        cin>>x>>y;
        union(x,y);
    }
}