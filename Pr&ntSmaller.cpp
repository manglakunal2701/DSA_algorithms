#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void previousSmaller(vector<int> arr){

    stack<int> s;
    for(int i=0;i<arr.size();i++){
        while(!s.empty() && arr[i]<=s.top()){
            s.pop();
        }
        if(s.empty()){
            cout<<"-1"<<" ";
        }
        else{
            cout<<s.top()<<" ";
        }
        s.push(arr[i]);
    }
}
void nextSmaller(vector<int> arr){
    stack<int>s;
    vector<int> res(arr.size());
    for(int i=arr.size()-1;i>=0;i--){
        while(!s.empty() && arr[i]<=s.top()){
            s.pop();
        }
        res[i]= s.empty() ? -1: s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<res[i]<<" ";
    }
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
    previousSmaller(arr);
    cout<<endl;
    nextSmaller(arr);
}