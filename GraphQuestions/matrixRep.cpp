#include<iostream>
#include <vector>
using namespace std;
int main(){
   cout<<"enter the nodes of graph"<<endl;
   int n,m;
   cin>>n;
   cout<<"Enter the number of edges of graph"<<endl;
   cin>>m;
   vector<vector<int>> arr(n+1,vector<int>(n+1,0));
   cout<<"Enter all the edges one by one"<<endl;
    for(int i=0;i<m;i++){
           int x;
           int y;
           cin>>x;
           cin>>y;
           arr[x][y]=1;
           arr[y][x]=1;
   }
   for(int i=1;i<n+1;i++){
       for(int j=1;j<n+1;j++){
           cout<<arr[i][j];
       }cout<<endl;
   }

}
