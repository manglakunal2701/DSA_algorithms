#include <bits/stdc++.h>
using namespace std;
int solveDP(int arr[],int i,int j,vector<vector<int>> &dp){
    if(i>=j)return 0;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp = solveDP(arr,i,k,dp)+solveDP(arr,k+1,j,dp)+arr[i-1]*arr[k]*arr[j];
        ans=min(ans,temp);
    }
    return dp[i][j]=ans;
}
int solve(int arr[],int i,int j){
    if(i>=j)return 0;
    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        ans=min(ans,temp);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr,1,n-1)<<endl;
      vector<vector<int>> dp(n,vector<int>(n,-1));
    cout<<solveDP(arr,1,n-1,dp)<<endl;
}