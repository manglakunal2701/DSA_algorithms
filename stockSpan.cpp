#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> stockSpan(vector<int>arr){
    stack<pair<int,int>> s;
    vector<int> ans(arr.size());
    for(int i=0;i<arr.size();i++){
        if(s.empty() || arr[i]<s.top().first){
            s.push({arr[i],1});
            ans[i]=1;
        }
        else{
            int c=1;
            while(!s.empty()&&arr[i]>=s.top().first){
                 c += s.top().second;
                s.pop();
            }
            s.push({arr[i],c});
            ans[i]=c;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    vector<int> ans=stockSpan(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}