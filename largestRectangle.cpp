#include<iostream>
#include<stack>
#include<vector>
#include <climits>
#include<algorithm>
using namespace std;
vector<int> previousSmaller(vector<int> arr){

    stack<int> s;
    vector<int> res(arr.size());
    for(int i=0;i<arr.size();i++){
        while(!s.empty() && arr[i]<=arr[s.top()]){
            s.pop();
        }
       res[i]= s.empty() ? -1: s.top();
        s.push(i);
    }
      return res;
}
vector<int> nextSmaller(vector<int> arr){
    stack<int>s;
    int n=arr.size();
    vector<int> res(arr.size());
    for(int i=arr.size()-1;i>=0;i--){
        while(!s.empty() && arr[i]<=arr[s.top()]){
            s.pop();
        }
        res[i]= s.empty() ? n: s.top();
        s.push(i);
    }
    return res;
}
int main()
{
    // int arr[]={4,10,5,18,3,12,7};
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    vector<int> ps=previousSmaller(arr);
    vector<int> ns=nextSmaller(arr);
    int res=INT_MIN;
    for(int i=0;i<arr.size();i++){
           int cur=((ns[i]-ps[i]-1)*arr[i]);
            res= max(res,cur);
           
    }
    cout<<res;
}