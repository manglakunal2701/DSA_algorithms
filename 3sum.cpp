#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>> sum3(vector<int> arr,int target){
    vector<vector<int>> res;
   sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int low=i+1,high=arr.size()-1;
        int current=0;
        while (low<high)
        {
            current= arr[i]+arr[low]+arr[high];
            if(current>target){
                high--;
            }
            else if(current<target){
                low++;
            }
            else{
                res.push_back({arr[i], arr[low], arr[high]});
            }

        }  
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter target"<<endl;
    cin>>target;
    vector<int> arr(n);
    for(auto &i:arr){
        cin>>i;
    }

    vector<vector<int>> vect= sum3(arr,target);
    
}
