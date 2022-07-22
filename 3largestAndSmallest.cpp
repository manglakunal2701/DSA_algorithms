#include<iostream>
#include<climits>
using namespace std;
int main(){
    int first=INT_MIN;
    int second=INT_MIN;
    int third=INT_MIN;
    int first_s=INT_MAX;
    int second_s=INT_MAX;
    int third_s=INT_MAX;
    int n;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third= second;
            second = first;
            first=arr[i];
        }
        else if(arr[i]>second){
             third=second;
            second= arr[i];
        }
        else if(arr[i]>third){
            third = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<first_s){
            third_s= second_s;
            second_s = first_s;
            first_s=arr[i];
        }
        else if(arr[i]<second_s){
            third_s=second_s;
            second_s= arr[i];
        }
        else if(arr[i]<third_s){
            third_s = arr[i];
        }
    }
    cout<<"Three largest numbers are:"<<endl;
    cout<<first<<" "<<second<<" "<<third<<" ";
    cout<<"Three smallest numbers are:"<<endl;
    cout<<first_s<<" "<<second_s<<" "<<third_s<<" ";
}