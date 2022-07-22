#include<iostream>
#include <vector>
using namespace std;
// int duplicate_no(int arr[],int n,int target,int searchFirst){
//     int low = 0;
//     int high=n-1;
//     int res=-1;
//     while(low<=high){
//         int mid= (low+high)/2;
//         if(arr[mid]==target){
//               res = mid;
//              if(searchFirst){
//                  high=mid-1;
//              }
//              else{
//                  low=mid+1;
//              }
//         }
//         else if(arr[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return res;
// }
// int main(){
//     int n,key;
//     cout<<"ENter the number of elements"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the key to find"<<endl;
//     cin>>key;
//     int first=  duplicate_no(arr,n,key,1);
//     int second=  duplicate_no(arr,n,key,0);
//     cout<<"First occurence is: "<<first<<endl;
//     cout<<"Second occurence is: "<<second<<endl;
//     cout<<"Number of copies of " <<key<<" in logn complexity is: "<<endl;
//     cout<<second-first+1<<endl;
// }
// void sum2(int arr[],int n){
//     bool res= false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 if(arr[i]+arr[j]==arr[k]){
//                     res = true;
//                     int a= i+1;
//                     int b=j+1;
//                     int c=k+1;
//                     if(a<b && b<c){
//                     cout<<" result is "<<a<<" "<<b<<" "<<c<<endl;
//                     break;
//                     }
//                 }
//             }
//         }
//     }
//     if(res==false){
//         cout<<" no sequence found"<<endl;
//     }
// }
// int main()
// {
//    int n;
//     cout<<"Enter the number of elements"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the sorted array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sum2(arr,n);    
// }
void differncePair(int arr[],int n,int key){
    int count=0;
    bool res=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]-arr[i]==key){
                res = true;
                cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
                count++;
            }
        }
    }
    if(res==false){
        cout<<"no pair found"<<endl;
    }
    else
    cout<<"Numbers of pairs equal to given key is: "<<count<<endl;
}
int main()
{
   int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the  array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;
    differncePair(arr,n,key);    
}