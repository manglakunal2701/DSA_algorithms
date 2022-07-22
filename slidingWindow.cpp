#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    cout<<"Enter the elements of n array"<<endl;
    vector<int> a(n);
    deque<int>Qi;
    vector<int> ans;

    for(auto &i: a){
        cin>>i;
    }
    for (int i = 0; i < k; ++i)
    {
        while ((!Qi.empty()) && a[i] >=  a[Qi.back()]){
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    ans.push_back(a[Qi.front()]);
    for(int i=k;i<n;i++){
        if(Qi.front()==i-k)
        {
            Qi.pop_front();
        }
          while ((!Qi.empty()) && a[i] >=  a[Qi.back()]){
            Qi.pop_back();
        }
        Qi.push_back(i);
        ans.push_back(a[Qi.front()]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
   
    
}