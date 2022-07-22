#include <bits/stdc++.h>
using namespace std;

void BFS(int **arr,vector<int>&res,int n){
    vector<int>vis(n+1,0);
    queue<int>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        res.push_back(node);
        for(int i=1;i<n+1;i++){
            if(arr[node][i]==1){
                if(vis[i]==0){
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int **arr;
    arr = (int **)malloc(n+1 * sizeof(int *));
    for (int i = 0; i < n+1; ++i)
        arr[i] = (int *)malloc(n+1 * sizeof(int));

    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrix entered is"<<endl;
     for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    vector<int>res;
    BFS(arr,res,n);
    if(res.size()==0){
        cout<<"PAth not exist";
    }
    else{
        cout<<"Path Exist"<<endl;
          for(int i=0;i<res.size();i++){
        cout<<res[i]<<"->";
        }
    }
}