#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
 
    int lChild= 2*i+1;
    int rChild=2*i+2;
    int max=i;
    if(lChild<n && arr[lChild]>arr[max]){
        max = lChild;
    }
    if(rChild<n && arr[rChild]>arr[max]){
        max = rChild;
    }
    if(max!=i){
        swap(arr[i],arr[max]);
        heapify(arr,n,max);
    }

}
void buildHeap(int arr[],int n){
   int start=n/2-1;
    for(int i=start;i>=0;i--){
        heapify(arr,n,i);
    }
}
void extract_max(int arr[],int &n){
    swap(arr[0],arr[n-1]);
    n=n-1;
    heapify(arr,n,0);
}
void parculate_Up(int arr[],int n,int i){
    int parent = (i-1)/2;
    if(arr[parent]>0){
        if(arr[i]>arr[parent]){
            swap(arr[i],arr[parent]);
            parculate_Up(arr,n,parent);
        }
    }
}
void insert(int arr[],int &n,int val){
    n=n+1;
    arr[n-1]=val;
    parculate_Up(arr,n,n-1);
}
int main(){
    int n;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    buildHeap(arr,n);
    cout<<"After heap build array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    extract_max(arr, n);  //delete the root node
    cout<<"After extraction array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
   
    insert(arr,n,10);
    cout<<"After inserting value  array is:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
}