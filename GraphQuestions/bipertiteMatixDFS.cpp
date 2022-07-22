#include <bits/stdc++.h>
using namespace std;
bool check(int node,int n,vector<vector<int>>adj,vector<int>&color){
    for(int i=1;i<n;i++){
        if(adj[node][i]==1){
            if(color[i]==-1){
                color[i]=1-color[node];
                if(!check(i,n,adj,color)){
                    return false;
                }
            }else if(color[i]==color[node]){
                    return false;
                }
        }
    }
    return true;
}
bool bipertite(vector<vector<int>>adj,int n){
    vector<int>color(n,-1);
    for(int i=1;i<n;i++){
        if(color[i]==-1){
            color[i]=0;
            if(!check(i,n,adj,color)){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"ENter the nodes"<<endl;
    cin>>n;
    vector<vector<int>>arr(n+1,vector<int>(n+1));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix Entered is"<<endl;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    int res=bipertite(arr,n+1);
    if(res==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }


}