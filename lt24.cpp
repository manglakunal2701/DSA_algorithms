#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,num;
    cout<<"Enter size of vector"<<endl;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        v.push_back(key);
    }
    // v.push_back(10);
    // v.push_back(20);

    // v.push_back(30);
    // v.push_back(40);
    v.insert(v.begin(),3);
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";
    }
    auto it=2;
    
    v.insert(v.begin()+it,3);
   
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";
    }

}





