#include <bits/stdc++.h>
using namespace std;
bool compare(pair<float ,pair<int,int>>a,pair<float ,pair<int,int>>b){
    return a.first>b.first;
}
int main(){
    int n,cap;
    cout<<"Enter the number of jobs and Capacity of each job"<<endl;
    cin>>n;
    cin>>cap;
    vector<pair<float ,pair<int,int>>>arr;
    vector<pair<int,int>>res;
    cout<<"Enter the profit and weight of job"<<endl;
    for(int i=0;i<n;i++){
        int pf;
        int wt;
        cin>>pf>>wt;
        float pw= (float)pf/wt;
        arr.push_back(make_pair(pw,make_pair(pf,wt)));
    }
    sort(arr.begin(),arr.end(),compare);
     for(int i=0;i<n;i++){
        cout<<arr[i].first<<" "<<arr[i].second.first<<" "<<arr[i].second.second<<endl;
    }
    float profit=0;
    for(int i=0;i<n;i++){
        if(cap-arr[i].second.second>0){
            cap=cap-arr[i].second.second;
            profit=profit+arr[i].second.first;
            res.push_back({arr[i].second.first,arr[i].second.second});
        }
        else{
            res.push_back({arr[i].second.first,cap});//multiply remaing cap with pi/wi for last case when weight is more than cap
            profit= profit+(arr[i].first * cap);
            break;
        }
    }
    cout<<"Total profit is "<<profit<<endl;
    cout<<"profit-weight:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i].first<<"-"<<res[i].second<<endl;
    }
}