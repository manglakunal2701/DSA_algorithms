#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     string arr;
//     cout<<"Enter the string with duplicate element"<<endl;
//     cin>>arr;
//     int count[250]={0};
//     int max=0,i;
//     char res;
//     for( i=0;i<arr.length();i++){
//             count[arr[i]]++;
//             if(max<count[arr[i]]){
//                 max=count[arr[i]];
//                 res = arr[i];
//             }
//         }
//     cout<<res<<" "<<count[res];

   
// }

// void sum2(vector<int> arr,int n,int target){
//     int low=0;
//     int high=n-1;
//     int sum=0;
//     while(low<high){
//         sum=arr[low]+arr[high];
//         if(sum==target){
//             cout<<"i is "<<arr[low]<<" j is "<<arr[high]<<endl;
//             break;
//         }
//         else if(sum>target)
//         {
//             high--;
//         }
//         else{
//             low++;
//         }
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter the n"<<endl;
//     cin>>n;
//     vector<int> arr(n);
//     for(auto &i:arr){
//         cin>>i;
//     }
//     sort(arr.begin(),arr.end());
//     int target;
//     cout<<"enter target"<<endl;
//     cin>>target;
//     sum2(arr,n,target);
// }
void intersection(vector<int> arr1,vector<int> arr2){
    int i=0;
    int j=0;
    int n=arr1.size();
    int m=arr2.size();
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }

}
int main(){
    int n,m;
    cout<<"Enter the number of elements of first array"<<endl;
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter elements of first array"<<endl;
    for(auto &i:arr1){
         cin>>i;
     }
    cout<<"Enter the number of elements of second array"<<endl;
      cin>>m;
     vector<int> arr2(m);
    cout<<"Enter elements of first array"<<endl;
    for(auto &i:arr2){
         cin>>i;
     }
    intersection(arr1,arr2);

}